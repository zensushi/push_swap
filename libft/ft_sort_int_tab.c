/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:46:26 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/15 16:46:29 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *new, int *old)
{
	int	temp;

	temp = *new;
	*new = *old;
	*old = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		j = 0;
		i++;
	}
}
