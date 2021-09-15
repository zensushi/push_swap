/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:06 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/15 16:45:08 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(int *new, int *old)
{
	int	temp;

	temp = *new;
	*new = *old;
	*old = temp;
}

void	ft_sort_index_stack(t_stack *stack)
{
	int	i;
	int	j;
	int	*a;
	int	n;

	n = stack->n;
	a = malloc(sizeof(int) * (n + 1));
	while (n-- > 0)
		a[n] = stack->arr[n];
	i = 0;
	while (i < stack->n - 1)
	{
		j = 0;
		while (j < stack->n - 1 - i)
		{
			if (a[j] > a[j + 1])
			{
				ft_swap(&a[j], &a[j + 1]);
				ft_swap(&stack->i[j], &stack->i[j + 1]);
			}
			j++;
		}
		i++;
	}
	free(a);
}
