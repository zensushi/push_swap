/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:34:56 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:10:24 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (0);
	while (src[i] != 0)
	{
		if (i + 1 < size)
			dest[i] = src[i];
		if (i + 1 == size)
			dest[i] = 0;
		i++;
	}
	if (i + 1 <= size)
		dest[i] = 0;
	return (i);
}
