/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:33:38 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:04:45 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (0);
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	d = dest;
	s = (unsigned char *)src;
	d += n;
	s += n;
	while (n--)
		*--d = *--s;
	return (dest);
}
