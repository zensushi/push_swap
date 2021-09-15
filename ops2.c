/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:14 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/15 16:45:15 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	int	first;
	int	n;

	first = a->i[0];
	n = 0;
	while (++n < a->n)
		a->i[n - 1] = a->i[n];
	a->i[a->n - 1] = first;
}

void	pa(t_stack *a, t_stack *b)
{
	int	n;

	n = a->n;
	while (n-- > 0)
		a->i[n + 1] = a->i[n];
	a->i[0] = b->i[0];
	a->n++;
	while (++n < b->n)
		b->i[n - 1] = b->i[n];
	b->n--;
}

void	pb(t_stack *a, t_stack *b)
{
	int	n;

	n = b->n;
	while (n-- > 0)
		b->i[n + 1] = b->i[n];
	b->i[0] = a->i[0];
	b->n++;
	while (++n < a->n)
		a->i[n - 1] = a->i[n];
	a->n--;
}

void	push_by_bit(t_stack *a, t_stack *b, int bit)
{
	int	n;

	n = a->n;
	while (n-- > 0)
	{
		if ((a->i[0] >> bit) & 1)
		{
			ft_putendl("ra");
			ra(a);
		}
		else if (a->n > 2 && check_stack_ordered(a))
		{
			ft_putendl("pb");
			pb(a, b);
		}
	}
	n = b->n;
	while (n-- > 0)
	{
		ft_putendl("pa");
		pa(a, b);
	}
}

void	order_stack(t_stack *a)
{
	t_stack	b;
	int		bit;
	int		i;
	int		n;

	b.n = 0;
	b.i = malloc(sizeof(int) * (a->n / 2 + 1));
	i = 0;
	bit = 0;
	n = a->n;
	while (bit < 32 && check_stack_ordered(a))
	{
		push_by_bit(a, &b, bit);
		bit++;
	}
}
