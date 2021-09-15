/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 20:07:00 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:07:31 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*d;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s1);
	d = malloc(sizeof(char) * (len + 1));
	if (!d)
		return (0);
	while (i <= len)
	{
		d[i] = s1[i];
		i++;
	}
	return (d);
}
