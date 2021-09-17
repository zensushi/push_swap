/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:06 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/17 16:47:14 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_split_atoi(char *s, t_stack *a)
{
	long	nb;
	size_t	i;

	a->arr = malloc(sizeof(int) * (a->n + 1));
	i = 0;
	while (*s)
	{
		nb = ft_atoi(s);
		if (nb >= 3000000000)
			return (0);
		else
			a->arr[i++] = nb;
		while (*s && !ft_isdigit(*s))
			s++;
		while (*s && ft_isdigit(*s))
			s++;
	}
	return (1);
}

void	ft_sort_index_stack(t_stack *stack)
{
	int	i;
	int	j;
	int	*tmp;
	int	n;

	n = stack->n;
	tmp = malloc(sizeof(int) * (n + 1));
	while (n-- > 0)
		tmp[n] = stack->arr[n];
	i = 0;
	while (i < stack->n - 1)
	{
		j = 0;
		while (j < stack->n - 1 - i)
		{
			if (tmp[j] > tmp[j + 1])
			{
				ft_swap(&tmp[j], &tmp[j + 1]);
				ft_swap(&stack->i[j], &stack->i[j + 1]);
			}
			j++;
		}
		i++;
	}
	free(tmp);
}

void	push_by_bit(t_stack *a, t_stack *b, int bit)
{
	int	n;

	n = a->n;
	while (n-- > 0)
	{
		if ((a->i[0] >> bit) & 1)
			ra(a);
		else if (a->n > 2 && !check_stack_ordered(a))
			pb(a, b);
	}
	n = b->n;
	while (n-- > 0)
		pa(a, b);
}

void	order_stack(t_stack *a, t_stack *b)
{
	int		bit;

	if (a->n == 2)
		ra(a);
	else if (a->n == 3)
		sort_three(a);
	else
	{
		b->n = 0;
		b->i = malloc(sizeof(int) * (a->n + 1));
		if (a->n <= 5)
		{
			sort_five(a, b);
			return ;
		}
	}
	bit = 0;
	while (bit < 32 && !check_stack_ordered(a))
	{
		push_by_bit(a, b, bit);
		bit++;
	}
}

void	free_stacks(t_stack *a, t_stack *b)
{
	if (a->i && b->i)
	{
		free(a->i);
		free(a->arr);
		a->n = 0;
		free(b->i);
		b->n = 0;
	}
	else
	{
		free(a->i);
		free(a->arr);
		a->n = 0;
	}
}
