/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:41 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/15 16:45:43 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int		n;
	int		*arr;
	int		*i;
}				t_stack;

typedef struct s_stacks
{
	t_stack		*a;
	t_stack		*b;
}				t_stacks;

void	ft_sort_index_stack(t_stack *stack);
void	pb(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	push_by_bit(t_stack *a, t_stack *b, int bit);
int		check_stack_ordered(t_stack *a);
void	order_stack(t_stack *a);
void	set_index(t_stack *a);
int		check_stack_valid(t_stack *a);
int		read_stack(char **av, t_stack *a);

#endif
