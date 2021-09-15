/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 16:23:12 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 16:48:15 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*el_new;

	el_new = (t_list *)malloc(sizeof(t_list));
	if (!el_new)
		return (0);
	el_new->content = content;
	el_new->next = 0;
	return (el_new);
}
