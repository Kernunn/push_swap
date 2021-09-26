#include "libft.h"
#include <stdlib.h>

t_list	*read_instruction(void)
{
	t_list	*instruction;
	char	*line;

	instruction = NULL;
	while (get_next_line(0, &line) > 0)
	{
		ft_lstadd_back(&instruction, ft_lstnew(line));
	}
	free(line);
	return (instruction);
}