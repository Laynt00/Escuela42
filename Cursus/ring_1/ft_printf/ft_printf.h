#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);

/* UTILS */ 

int		ft_printstr(char *str);
void	ft_put_ptr(uintptr_t num);
int		ft_print_ptr(unsigned long long ptr);
int		ft_printnbr(int n);
int		ft_print_unsigned(unsigned int n);
int 	ft_hex_len(unsigned	int num);
void	ft_put_hex(unsigned int num, const char format);
int	    ft_print_hex(unsigned int num, const char format);

#endif