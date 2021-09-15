/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:53:00 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:13:26 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return ((ft_strdup("")));
	d = malloc((len + 1) * sizeof(char));
	if (!d)
		return (0);
	s += (size_t)start;
	s_len = len;
	while (len--)
		*d++ = *s++;
	*d = 0;
	return (d - s_len);
}
