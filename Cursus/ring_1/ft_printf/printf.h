#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "./libft/libft.h"
# include <stdio.h>

typedef struct	s_info
{
	int			minus;
	int			zero;
	int			width;
	int			prec;
	char		type;
	int			nbr_base;
	int			nbr_sign;
}				t_info;


/*
*****************************   MAIN FUNCTION   *******************************
*/

int				ft_printf(const char *format, ...);

/*
*****************************   PRINT FUNCTION   *******************************
*/


/*
*****************************   UTILS FUNCTION   *******************************
*/

#endif