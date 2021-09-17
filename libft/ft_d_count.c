#include "libft.h"

int	ft_d_count(char *s)
{
	int	n;

	if (!s)
		return (-1);
	n = 0;
	while (*s)
	{
		if (ft_isdigit(*s))
		{
			n++;
			s++;
			while (*s && ft_isdigit(*s))
				s++;
		}
		else if ((*s < 14 && *s > 8) || *s == ' ' || *s == '-' || *s == '+')
			s++;
		else
			return (-1);
	}
	if (n < 1)
		return (-1);
	return (n);
}
