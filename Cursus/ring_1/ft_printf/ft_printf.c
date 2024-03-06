/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 18:19:01 by laynt             #+#    #+#             */
/*   Updated: 2024/03/06 11:44:34 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "./libft/libft.h"

int	ft_formats(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_print_ptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		print_length += ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
	{
		write(1, "%", 1);
		print_length += 1;
	}
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			print_length += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printchar(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
/*  int main()
{
    int a;
    int b;
    printf("----TEST CHAR--------------\n");
    a = ft_printf("%c\n", 'a');
    b = printf("%c\n", 'a');
    ft_printf("%d\n", a);
    ft_printf("%d\n", b);
    printf("----TEST STRING--------------\n");
    a =ft_printf("Hola\n%s\n", "Miguelet: Que yo no me drogo!");
    b = printf("Hola\n%s\n", "Miguelet: Que yo no me drogo!");
    ft_printf("\n%d\n", a);
    ft_printf("\n%d\n", b);
    printf("----TEST POINTER TO HEX--------------\n");
    ft_printf("Hola\n%p\n", "Miguelet: Que yo no me drogo!");
    printf("Hola\n%p\n", "Miguelet: Que yo no me drogo!");
    printf("----TEST DECIMAL--------------\n");
    ft_printf("%d\n", 0);
    printf("%d\n", 0);
	ft_printf("\n%d\n", a);
    ft_printf("\n%d\n", b);
    printf("----TEST ENTERO--------------\n");
    ft_printf("%i\n", 10);
    printf("%i\n", 10);
    printf("----TEST UNSIGNED--------------\n");
    ft_printf("%u\n", -120);
    printf("%u\n", -120);
    printf("----TEST HEXADECIMAL--------------\n");
    ft_printf("%X\n", -120);
    printf("%X\n", -120);
    ft_printf("%x\n", -120);
    printf("%x\n", -120);
    printf("----TEST PER --------------\n");
    a = ft_printf(" %% ");
    b = printf(" %% ");
    ft_printf("%d\n", a);
    ft_printf("%d\n", b);
    return 0;
}  */