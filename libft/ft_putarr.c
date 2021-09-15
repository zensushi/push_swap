/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putarr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 14:50:40 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/14 15:41:24 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putarr(int *d, int n)
{
	while (n-- > 0)
	{
		ft_putnbr(*d);
		if (n != 0)
			ft_putchar(' ');
		d++;
	}
	ft_putchar('\n');
}
