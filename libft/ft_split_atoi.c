/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_atoi.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:49:16 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/13 15:28:54 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*ft_split_atoi(char *s)
{
	int		*d;
	size_t	i;

	d = (int *)malloc(sizeof(int) * (ft_d_count(s) + 2));
	i = 0;
	while (*s)
	{
		d[i++] = ft_atoi(s);
		while (*s && !ft_isdigit(*s))
			s++;
		while (*s && ft_isdigit(*s))
			s++;
	}
	d[i] = 0;
	return (d);
}
