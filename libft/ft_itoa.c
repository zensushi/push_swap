/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 11:52:14 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/09 16:46:10 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_dcount(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		count;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_dcount(n);
	s = malloc(sizeof(char) * (count + 1));
	if (!s)
		return (0);
	if (n < 0)
	{
		*s = '-';
		n = -n;
	}
	*(s + count) = 0;
	while (count-- > 0)
	{
		if (count == 0 && *s == '-')
			break ;
		*(s + count) = n % 10 + '0';
		n /= 10;
	}
	return (s);
}
