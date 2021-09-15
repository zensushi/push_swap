/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:55:13 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:09:56 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (0);
	while (*s1)
		*s++ = *s1++;
	while (*s2)
		*s++ = *s2++;
	*s = 0;
	return (s - len);
}
