/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/11/10 20:32:24 by fozturk        #+#    #+#                */
/*   Updated: 2026/11/10 20:32:26 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

int	pb(t_list **a, t_list **b, int print)
{
	t_list	*node_to_move;

	if (!a || !*a)
		return (0);
	node_to_move = *a;
	*a = (*a)->next;
	ft_lstadd_front(b, node_to_move);
	if (print)
		ft_putstr_fd("pb\n", 1);
	return (1);
}

int	pa(t_list **a, t_list **b, int print)
{
	t_list	*node_to_move;

	if (!b || !*b)
		return (0);
	node_to_move = *b;
	*b = (*b)->next;
	ft_lstadd_front(a, node_to_move);
	if (print)
		ft_putstr_fd("pa\n", 1);
	return (1);
}
