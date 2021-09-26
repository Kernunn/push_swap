#include "libft.h"
#include "executing_instructions.h"
#include "instruction.h"

void	dispatch(char *instr, t_list **stack_a, t_list **stack_b)
{
	if (ft_strncmp(instr, "sa", 3) == 0)
		return (sa_or_sb(*stack_a));
	if (ft_strncmp(instr, "sb", 3) == 0)
		return (sa_or_sb(*stack_b));
	if (ft_strncmp(instr, "ss", 3) == 0)
		return (ss(*stack_a, *stack_b));
	if (ft_strncmp(instr, "pa", 3) == 0)
		return (pa_or_pb(stack_a, stack_b));
	if (ft_strncmp(instr, "pb", 3) == 0)
		return (pa_or_pb(stack_b, stack_a));
	if (ft_strncmp(instr, "ra", 3) == 0)
		return (ra_or_rb(stack_a));
	if (ft_strncmp(instr, "rb", 3) == 0)
		return (ra_or_rb(stack_b));
	if (ft_strncmp(instr, "rr", 3) == 0)
		return (rr(stack_a, stack_b));
	if (ft_strncmp(instr, "rra", 4) == 0)
		return (rra_or_rrb(stack_a));
	if (ft_strncmp(instr, "rrb", 4) == 0)
		return (rra_or_rrb(stack_b));
	if (ft_strncmp(instr, "rrr", 4) == 0)
		return (rrr(stack_a, stack_b));
	error();
}

void executing_instructions(t_list *instr, t_list **stack_a, t_list **stack_b)
{
	while (instr)
	{
		dispatch(instr->content, stack_a, stack_b);
		instr = instr->next;
	}
}
