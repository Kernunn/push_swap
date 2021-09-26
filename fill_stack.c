#include "libft.h"
#include <stdlib.h>

static void	check_duplicate(t_list *stack)
{
	t_list	*tmp;
	int		number;

	while (stack)
	{
		number = *(int*)(stack->content);
		tmp = stack->next;
		while (tmp)
		{
			if (number == *(int*)(tmp->content))
				error();
			tmp = tmp->next;
		}
		stack = stack->next;
	}
}

t_list	*fill_stack(char **argv)
{
	t_list	*stack;
	int		*tmp;

	stack = NULL;
	while (*argv)
	{
		tmp = malloc(sizeof(int));
		if (tmp == NULL)
			exit(1);
		*tmp = ft_atoi(*argv);
		ft_lstadd_back(&stack, ft_lstnew(tmp));
		argv++;
	}
	check_duplicate(stack);
	return (stack);
}