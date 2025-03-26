#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h>
# include <limits.h>
# include "./libft/libft.h"

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

// Split
char **split(char *s, char c);

# endif