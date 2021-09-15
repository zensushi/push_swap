/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:34:15 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 17:04:16 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1_temp;
	unsigned char	*s2_temp;

	s1_temp = (unsigned char *)s1;
	s2_temp = (unsigned char *)s2;
	while (n--)
		if (*s1_temp++ != *s2_temp++)
			return (*(s1_temp - 1) - *(s2_temp - 1));
	return (0);
}
