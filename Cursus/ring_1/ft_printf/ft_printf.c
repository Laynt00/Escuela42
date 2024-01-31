/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:10:36 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/31 11:11:11 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "printf.h"


int ft_printf(char const *format, ...)
{
	int ch_print = 0;

	va_list args; // To inicialice the num of arg we're gonna take
	if(format == NULL)
		return (-1);
	va_start(args, format);
	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1); //Write the ch to the standard output
			ch_print++;
		}
		else					 //If format is the % sign
		{
			format++;			 //Skip '%' - Check next ch
			if(*format == '\0')
				break;
			if(*format != '%') // This solves '%%'
			{
				write(1, format, 1);  
				ch_print++;
			}
			else if(*format == 'c')
			{
				char c = va_arg(args, int); //Use va_arg(list,char) for ch
				write(1, &c, 1);
				ch_print++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				write(1, str, ft_strlen(str));
				ch_print += ft_strlen(str);
			}
		}
		format++;
		
	}
	va_end(args);  //Ends the list of arguments
	return (ch_print);
}

int main()
{
    ft_printf("Leo\n");
	ft_printf("%c\n", "S");
	ft_printf("%s\n", "String");
	ft_printf("%%\n");
	return 0;
}