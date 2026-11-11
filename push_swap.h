/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   push_swap.h                                         :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/11/10 20:37:54 by fozturk        #+#    #+#                */
/*   Updated: 2026/11/10 20:37:55 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

char	**parse_flags(char **argv, int *st, int *bench);
t_list	*parse_nums(char **argv);
double	compute_disorder(t_list *a);

int		sort_simple(t_list **a, int bench);
int		sort_adaptive(t_list **a, int bench);

int		sa(t_list **a, int print);
int		sb(t_list **a, int print);
int		ss(t_list **a, t_list **b, int print);

int		pb(t_list **a, t_list **b, int print);
int		pa(t_list **a, t_list **b, int print);

int		ra(t_list **a, int print);
int		rb(t_list **b, int print);
int		rr(t_list **a, t_list **b, int print);

int		rra(t_list **a, int print);
int		rrb(t_list **b, int print);
int		rrr(t_list **a, t_list **b, int print);
#endif
