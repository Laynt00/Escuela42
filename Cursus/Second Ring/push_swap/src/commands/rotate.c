#include "../../push_swap.h"

static void	rotate(t_stack_n **stack)
{
	t_stack_n	*last_node;

	if (!*stack || !(*stack)->next)
    	return;
	last_node = find_last(*stack); 
	last_node->next = *stack; 
	*stack = (*stack)->next; 
	(*stack)->prev = NULL; 
	last_node->next->prev = last_node;
	last_node->next->next = NULL;
}		

void	ra(t_stack_n **a, bool print) //Rotate the top `a` node to the bottom of the stack, and print the instruction
{
	rotate(a);
	if (!print)
		ft_printf("ra\n");
}

void	rb(t_stack_n **b, bool print) //Rotate the top `b` node to the bottom of the stack, and print the instruction
{
	rotate(b);
	if (!print)
		ft_printf("rb\n");
}

void	rr(t_stack_n **a, t_stack_n **b, bool print) //Stimultaneously rotate both the top `a` and `b` nodes to the bottom of the stack, and print the instruction
{
	rotate(a);
	rotate(b);
	if (!print)
		ft_printf("rr\n");
}