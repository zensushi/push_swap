/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 11:49:16 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:25:26 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wcount(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**d;
	char	*start;
	size_t	i;

	d = (char **)malloc((ft_wcount(s, c) + 1) * sizeof(char *));
	if (!s || !d)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			d[i] = (char *)malloc(s - start + 1);
			if (!d[i])
				return (0);
			ft_strlcpy(d[i++], start, (s - start + 1));
		}
		else
			s++;
	}
	d[i] = 0;
	return (d);
}
