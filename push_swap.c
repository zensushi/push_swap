/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:31 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/15 16:45:33 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	check_stack_ordered(t_stack *a)
{
	int	n;

	n = a->n;
	while (n-- > 1)
		if (a->i[n] < a->i[n -1])
			return (1);
	return (0);
}

void	set_index(t_stack *a)
{
	int	n;
	int	*index;

	n = a->n;
	a->i = malloc(sizeof(int) * (n + 1));
	index = malloc(sizeof(int) * (n + 1));
	while (n-- > 0)
		a->i[n] = n + 1;
	ft_sort_index_stack(a);
	while (n++ < a->n)
		index[n] = a->i[n];
	n = 0;
	while (n < a->n)
	{
		a->i[index[n] - 1] = n + 1;
		n++;
	}
}

int	check_stack_valid(t_stack *a)
{
	int	n;
	int	i;
	int	j;
	int	nb;

	n = a->n;
	j = 1;
	while (n-- > 0)
	{
		nb = a->arr[j - 1];
		i = j;
		while (nb != a->arr[i] && n-- > 0)
			i++;
		if (nb == a->arr[i])
			return (1);
		j++;
		n = a->n - j;
	}
	return (0);
}

int	read_stack(char **av, t_stack *a)
{
	char	*s;
	char	*t;

	s = ft_strdup("");
	while (*(++av))
	{
		t = ft_strjoin(s, *av);
		free(s);
		s = t;
		t = ft_strjoin(s, " ");
		free(s);
		s = t;
	}
	a->n = ft_d_count(s);
	a->arr = ft_split_atoi(s);
	free(t);
	if (check_stack_valid(a))
		return (1);
	set_index(a);
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	a;
	int		valid;

	if (ac < 2)
	{
		ft_putendl("Error");
		return (1);
	}
	else
	{
		valid = read_stack(av, &a);
		if (valid || a.n == 0)
		{
			ft_putendl("Error");
			return (1);
		}
		if (check_stack_ordered(&a) && a.n > 1)
			order_stack(&a);
	}
	return (0);
}
