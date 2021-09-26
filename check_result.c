#include "libft.h"

#include <stdio.h>
void	check_result(t_list *stack_a, t_list *stack_b)
{
	int number;

	if (stack_b)
	{
		printf("KO\n");
		return ;
	}
	number = *(int*)(stack_a->content);
	stack_a = stack_a->next;
	while (stack_a)
	{
		if (number > *(int*)(stack_a->content))
		{
			printf("KO\n");
			return ;
		}
		number = *(int*)(stack_a->content);
		stack_a = stack_a->next;
	}
	printf("OK\n");
}