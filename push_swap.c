/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:31 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/17 16:46:15 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_stack_ordered(t_stack *a)
{
	int	n;

	n = a->n;
	while (n-- > 1)
		if (a->i[n] < a->i[n -1])
			return (0);
	return (1);
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
	free(index);
}

int	check_stack_valid(t_stack *a)
{
	int	n;
	int	i;
	int	j;
	int	nb;

	if (a->n == 1 && a->arr[0] == 0)
		return (1);
	n = a->n;
	j = 1;
	while (n-- > 0)
	{
		nb = a->arr[j - 1];
		i = j;
		while (nb != a->arr[i] && n-- > 1)
			i++;
		if (nb == a->arr[i] && i != 0)
			return (0);
		j++;
		n = a->n - j;
	}
	return (1);
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
	if (a->n < 1 || !ft_split_atoi(s, a))
	{
		free(t);
		return (0);
	}
	free(t);
	if (!check_stack_valid(a))
		return (0);
	set_index(a);
	return (1);
}

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;

	if (ac <= 1)
		return (-1);
	else if (!read_stack(av, &a))
	{
		ft_putendl("Error");
		free_stacks(&a, &b);
		return (-1);
	}
	else if (check_stack_ordered(&a))
	{
		free_stacks(&a, &b);
		return (1);
	}
	else
		order_stack(&a, &b);
	free_stacks(&a, &b);
	return (0);
}
