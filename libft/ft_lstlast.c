/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:45:57 by ccubreac          #+#    #+#             */
/*   Updated: 2021/01/18 16:55:03 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list			*last;

	if (!lst)
		return (0);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
