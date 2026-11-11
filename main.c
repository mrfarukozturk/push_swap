#include "libft/libft.h"
#include "push_swap.h"

void	printnums(void *nums)
{
	printf("sayi-- : %d\n", *(int *)nums);
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
	sort_adaptive(&a, 1);
	printf("Zorluk:%f \n\n", compute_disorder(a));


	printf("----Liste A----\n");
	ft_lstiter(a, printnums);

	printf("\n----Liste B----\n");
	ft_lstiter(b, printnums);
	
	printf("\nstrateji:%d \nbench:%d", st, bench);
	return (0);
}
