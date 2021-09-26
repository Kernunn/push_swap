#include "libft.h"

void ra_or_rb(t_list **stack)
{
	t_list *tmp;

	if (*stack && ft_lstsize(*stack) > 1)
	{
		tmp = (*stack)->next;
		ft_lstlast(*stack)->next = *stack;
		(*stack)->next = NULL;
		*stack = tmp;
	}
}

void rr(t_list **stack_a, t_list **stack_b)
{
	ra_or_rb(stack_a);
	ra_or_rb(stack_b);
}

void rra_or_rrb(t_list **stack)
{
	t_list *tmp;

	if (*stack && ft_lstsize(*stack) > 1)
	{
		tmp = ft_lst_at(*stack, ft_lstsize(*stack) - 2);
		ft_lstlast(*stack)->next = *stack;
		*stack = tmp->next;
		tmp->next = NULL;
	}
}

void rrr(t_list **stack_a, t_list **stack_b)
{
	rra_or_rrb(stack_a);
	rra_or_rrb(stack_b);
}
