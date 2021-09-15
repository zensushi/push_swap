#include "libft.h"

int	ft_d_count(char *s)
{
	int	n;

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
		else
			s++;
	}
	return (n);
}
