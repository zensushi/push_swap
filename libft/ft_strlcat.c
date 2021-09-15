/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:53:39 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:10:13 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	i;
	size_t	j;

	len_d = 0;
	while (dest[len_d] != '\0')
		len_d++;
	len_s = 0;
	while (src[len_s] != '\0')
		len_s++;
	i = 0;
	j = len_d;
	if (size > len_d)
	{
		while (src[i] != '\0' && j < size - 1)
		{
			dest[j] = src[i];
			j++;
			i++;
		}
		dest[j] = '\0';
		return (len_d + len_s);
	}
	return (len_s + size);
}
