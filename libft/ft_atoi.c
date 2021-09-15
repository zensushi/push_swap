/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 17:06:15 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/13 12:37:20 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *s)
{
	int	n;
	int	sign;
	int	count;

	n = 0;
	sign = 1;
	count = 0;
	while (*s == ' ' || (*s > 8 && *s < 14))
		s++;
	while ((*s == '+') || (*s == '-'))
		if (*s++ == '-')
			sign *= -1;
	while (*s >= '0' && *s <= '9')
	{
		count++;
		if (count > 19 && sign == -1)
			return (0);
		if (count > 19 && sign == 1)
			return (-1);
		n = n * 10 + (*s - '0');
		s++;
	}
	return (n * sign);
}
