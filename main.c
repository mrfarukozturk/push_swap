#include "libft/libft.h"
#include "push_swap.h"

void	printnums(void *nums)
{
	printf("sayi-- : %d\n", *(int *)nums);
}

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

int	sort_simple(t_list **a, int bench)
{
	unsigned int size;

	size = ft_lstsize(*a);

	if (size == 0)
		return (0);

	if (size == 2)
		if (*(int *)(*a)->content > *(int *)(*a)->next->content)
			sa(a, 1);

	if (size == 3)
	{

	}	

	
	bench = 0;
	return (0);
}

int	main(int argc, char **argv)
{
	int		st;
	int		bench;
	t_list	*a;
	t_list	*b;

	if (argc == 1)
		return (0);
	st = 0;
	bench = 0;
	a = parse_nums(parse_flags(argv, &st, &bench));
	b = NULL;
	//ss(&a, &b, 1);
	/*pb(&a, &b, 1);
	pb(&a, &b, 1);

	rr(&a, &b, 1);*/
	//rra(&a, 1);
	sort_simple(&a, 1);
	printf("Zorluk:%f \n\n", compute_disorder(a));


	printf("----Liste A----\n");
	ft_lstiter(a, printnums);

	printf("\n----Liste B----\n");
	ft_lstiter(b, printnums);
	
	printf("\nstrateji:%d \nbench:%d", st, bench);
	return (0);
}
