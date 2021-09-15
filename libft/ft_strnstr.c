/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:05:02 by ccubreac          #+#    #+#             */
/*   Updated: 2021/01/18 19:47:21 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *c, size_t n)
{
	size_t	i;
	size_t	j;

	if (ft_strncmp(c, "", 1) == 0)
		return ((char *)s);
	i = 0;
	while (i < n && s[i] && n != 0)
	{
		j = 0;
		while (i + j < n && s[i + j] == c[j] && c[j] != '\0')
			j++;
		if (c[j] == '\0')
			return ((char *)s + i);
		i++;
	}
	return (0);
}
