/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:45:41 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/17 14:43:57 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

typedef struct s_stack
{
	int		n;
	int		*arr;
	int		*i;
}				t_stack;

int		check_stack_valid(t_stack *a);
int		check_stack_ordered(t_stack *a);
void	free_stacks(t_stack *a, t_stack *b);
void	ft_putendl(char *s);
void	ft_sort_index_stack(t_stack *stack);
int		ft_split_atoi(char *s, t_stack *a);
void	order_stack(t_stack *a, t_stack *b);
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);
void	push_by_bit(t_stack *a, t_stack *b, int bit);
void	ra(t_stack *a);
void	rb(t_stack *b);
int		read_stack(char **av, t_stack *a);
void	rra(t_stack *a);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	set_index(t_stack *a);
void	sort_three(t_stack *a);
void	sort_five(t_stack *a, t_stack *b);

#endif
