#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include "libft.h"

void sa_or_sb(t_list *stack);
void ss(t_list *stack_a, t_list *stack_b);
void pa_or_pb(t_list **stack_a, t_list **stack_b);
void ra_or_rb(t_list **stack);
void rr(t_list **stack_a, t_list **stack_b);
void rra_or_rrb(t_list **stack);
void rrr(t_list **stack_a, t_list **stack_b);

#endif
