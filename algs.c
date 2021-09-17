#include "push_swap.h"

void	sort_three(t_stack *a)
{
	if (!check_stack_ordered(a))
	{
		if (a->i[0] < a->i[1] && a->i[0] < a->i[2])
		{
			sa(a);
			ra(a);
		}
		else if (a->i[0] > a->i[1] && a->i[0] > a->i[2])
		{
			if (a->i[1] > a->i[2])
			{
				sa(a);
				rra(a);
			}
			else
				ra(a);
		}
		else if (a->i[0] < a->i[1] && a->i[0] > a->i[2])
			rra(a);
		else
			sa(a);
	}
}

void	sort_five(t_stack *a, t_stack *b)
{
	while (a->i[0] + a->i[1] != 9 && a->i[0] + a->i[1] != 3)
	{
		if (a->i[0] > a->i[1])
			ra(a);
		else
		{
			sa(a);
			ra(a);
		}
	}
	if (a->i[0] == 2 || a->i[0] == 5)
		sa(a);
	if (check_stack_ordered(a))
		return ;
	pb(a, b);
	pb(a, b);
	sort_three(a);
	pa(a, b);
	pa(a, b);
	if (a->i[0] == 4)
	{
		ra(a);
		ra(a);
	}
}
