#include "libft.h"
#include <stdlib.h>
#include "fill_stack.h"
#include "read_instruction.h"
#include "executing_instructions.h"
#include "check_result.h"

int main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*instruction;

	if (argc < 2)
		return (1);
	stack_a = fill_stack(argv + 1);
	stack_b = NULL;
	instruction = read_instruction();
	executing_instructions(instruction, &stack_a, &stack_b);
	check_result(stack_a, stack_b);
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	ft_lstclear(&instruction, free);
	return (0);
}
