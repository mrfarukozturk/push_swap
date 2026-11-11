/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   parse_nums.c                                        :+:    :+:           */
/*                                                      +:+                   */
/*   By: fozturk <marvin@42.fr>                        +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/11/11 19:06:47 by fozturk        #+#    #+#                */
/*   Updated: 2026/11/11 19:06:49 by fozturk        ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"

t_list	*parse_nums(char **argv)
{
	int		i;
	t_list	*nums;
	t_list	*new_node;
	int		*value;

	i = 0;
	nums = NULL;
	while (argv[i])
	{
		value = (int *)ft_calloc(1, sizeof(int));
		if (!value)
			return (ft_lstclear(&nums, free), NULL);
		*value = ft_atoi(argv[i]);
		new_node = ft_lstnew(value);
		if (!new_node)
			return (free(value), ft_lstclear(&nums, free), NULL);
		ft_lstadd_back(&nums, new_node);
		i++;
	}
	return (nums);
}
