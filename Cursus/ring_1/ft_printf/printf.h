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

int	ft_prints1(char const *format, int ch_p, va_list args);

void ft_print_ch(char const *format, int ch_p, va_list args);


/*
*****************************   UTILS FUNCTION   *******************************
*/

#endif