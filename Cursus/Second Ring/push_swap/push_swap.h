#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "./libft/inc/libft.h"
# include "./libft/inc/ft_printf.h"

typedef struct s_stack_n
{
	int		nbr;
	int		index;
	int		cost;
	bool	above_median;
	bool	cheapest;

	struct s_stack_n *target_n;
	struct s_stack_n *next;
	struct s_stack_n *prev;
}	t_stack_n;

//***Handle_errors.c
int				error_syntax(char *str_n); 
int				error_duplicate(t_stack_n *a, int n);
void			free_stack(t_stack_n **stack);
void			free_errors(t_stack_n **a);

//***Stack_init.c

t_stack_n	*get_cheapest(t_stack_n *stack);
void			init_stack_a(t_stack_n **a, char **argv); //Initiate stack `a` before processing
char			**split(char *s, char c); //To handle input of numbers as a string argument, e.g. enclosed in " "
void			prep_for_push(t_stack_n **s, t_stack_n *n, char c); //Prep the required nodes on top for pushing

//***Init_a_to_b.c
void			current_index(t_stack_n *stack); //Set the node's current index
void			set_cheapest(t_stack_n *stack); //Set the stack's cheapest node
void			init_nodes_a(t_stack_n *a, t_stack_n *b); //To prep all nodes for pushing `a` to `b`

//***init_b_to_a.c
void			init_nodes_b(t_stack_n *a, t_stack_n *b); //To prep all nodes for pushing `b` back to `a`


//***Utils.c
t_stack_n	*find_last(t_stack_n *stack); //Find the last node of a stack
t_stack_n	*find_min(t_stack_n *stack); //Find the smallest number
t_stack_n	*find_max(t_stack_n *stack); //Find the biggest number
int				stack_len(t_stack_n *stack); //Calculate the length of a stack
bool	stack_sorted(t_stack_n *stack);



//***Commands
void			pa(t_stack_n **a, t_stack_n **b, bool print);
void			pb(t_stack_n **b, t_stack_n **a, bool print);
void			rra(t_stack_n **a, bool print);
void			rrb(t_stack_n **b, bool print);
void			rrr(t_stack_n **a, t_stack_n **b, bool print);
void			ra(t_stack_n **a, bool print);
void			rb(t_stack_n **b, bool print);
void			rr(t_stack_n **a, t_stack_n **b, bool print);
void			sa(t_stack_n **a, bool print);
void			sb(t_stack_n **b, bool print);
void			ss(t_stack_n **a, t_stack_n **b, bool print);




//***Algorithm (sort_stacks, sort_three)
void			sort_three(t_stack_n **a);
void			sort_stacks(t_stack_n **a, t_stack_n **b);


# endif