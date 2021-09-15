/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccubreac <ccubreac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 19:28:04 by ccubreac          #+#    #+#             */
/*   Updated: 2021/09/11 11:56:25 by ccubreac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || ft_strlen(s1) == 0)
		return (ft_strdup(""));
	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, (int)s1[start]) != 0 && start <= end)
		start++;
	while (ft_strchr(set, (int)s1[end]) != 0 && end > start)
		end--;
	s = malloc((end - start + 2) * sizeof(char));
	if (!s)
		return (0);
	i = 0;
	while (start <= end)
		s[i++] = s1[start++];
	s[i] = 0;
	return (s);
}
