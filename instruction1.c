#include "libft.h"

static void	swap(void *a, void *b)
{
	int tmp;

	tmp = *(int*)(a);
	*(int*)(a) = *(int*)(b);
	*(int*)(b) = tmp;
}

void sa_or_sb(t_list *stack)
{
	if (stack && stack->next)
	{
		swap(stack->content, stack->next->content);
	}
}

void ss(t_list *stack_a, t_list *stack_b)
{
	sa_or_sb(stack_a);
	sa_or_sb(stack_b);
}

void pa_or_pb(t_list **stack_a, t_list **stack_b)
{
	t_list *tmp;

	if (*stack_b)
	{
		tmp = (*stack_b)->next;
		(*stack_b)->next = *stack_a;
		*stack_a = *stack_b;
		*stack_b = tmp;
	}
}
