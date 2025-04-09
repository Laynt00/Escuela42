#include "../../push_swap.h"

int	main(int argc, char **argv) 
{
	t_stack_n	*a; 
	t_stack_n	*b;

	a = NULL;
    b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0])) 
		return (1);
	else if (argc == 2)
		argv = split(argv[1], ' '); 
    init_stack_a(&a, argv + 1); //Initiate stack `a`, which also handles errors
	if (!stack_sorted(a)) //Check if the stack is not sorted
	{
		if (stack_len(a) == 2) //If not, and there are two numbers, swap the first two nodes
			sa(&a, false);
		else if (stack_len(a) == 3) //If not, and there are three numbers, call the sort three algorithm
			sort_three(&a);
		else
			sort_stacks(&a, &b); //If not, and there are more than three numbers, call the sort stacks algorithm
	}
	free_stack(&a); //Clean up the stack
	return (0);
}