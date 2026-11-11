/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   sort_adaptive.c                                     :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/11/11 20:02:43 by fozturk        #+#    #+#                */
/*   Updated: 2026/11/11 20:02:45 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

static int	find_min_value(t_list *stack)
{
	int		min_value;
	t_list	*current;

	if (!stack)
		return (0);
	min_value = *(int *)stack->content;
	current = stack->next;
	while (current)
	{
		if (*(int *)current->content < min_value)
			min_value = *(int *)current->content;
		current = current->next;
	}
	return (min_value);
}

static int	find_value_index(t_list *stack, int value)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (*(int *)stack->content == value)
			return (index);
		index++;
		stack = stack->next;
	}
	return (0);
}

static void	move_min_to_top(t_list **a, int min_value, int bench)
{
	int	index;
	int	size;

	if (!a || !*a)
		return ;
	size = ft_lstsize(*a);
	while (*(int *)(*a)->content != min_value)
	{
		index = find_value_index(*a, min_value);
		if (index <= (size / 2))
			ra(a, bench);
		else
			rra(a, bench);
		if (size > 1)
			size = ft_lstsize(*a);
	}
}

int	sort_adaptive(t_list **a, int bench)
{
	t_list	*b;
	int		size;
	int		min_value;

	if (!a || !*a)
		return (0);
	b = NULL;
	size = ft_lstsize(*a);
	if (size <= 3)
		return (sort_simple(a, bench));
	while (size > 3)
	{
		min_value = find_min_value(*a);
		move_min_to_top(a, min_value, bench);
		pb(a, &b, bench);
		size--;
	}
	sort_simple(a, bench);
	while (b)
		pa(a, &b, bench);
	return (1);
}
