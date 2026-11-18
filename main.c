/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   main.c                                              :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/11/18 15:49:36 by fozturk        #+#    #+#                */
/*   Updated: 2026/11/18 15:49:37 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printnums(void *nums)
{
	printf("Num: %d\n", *(int *)nums);
}

static void	push_swap(t_list **a, t_list **b, int st, t_bench *bench)
{
	if (bench->disorder == 0.0)
		return ;
	if (st == 1)
		sort_simple(a, b, bench);
/*
	else if (st == 2)
		sort_medium(a, b, bench);
	else if (st == 3)
		sort_complex(a, b, bench);
	else
		sort_adaptive(a, b, bench);

*/
}

int	main(int argc, char **argv)
{
	int		st;
	t_bench	bench;
	t_list	*a;
	t_list	*b;

	if (argc < 2)
		return (0);
	st = 0;
	ft_bzero(&bench, sizeof(t_bench));
	a = parse_nums(parse_flags(argv, &st, &bench));
	bench.disorder = compute_disorder(a);
	b = NULL;
	push_swap(&a, &b, st, &bench);
	printf("\n----Liste A----\n");
	ft_lstiter(a, printnums);
	print_bench(&bench);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	return (0);
}
