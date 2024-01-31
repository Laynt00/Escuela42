/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prints1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:24:58 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/31 11:48:00 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void ft_print_ch(char const *format, int ch_p, va_list args)
{
    char    c;
    char    *str;
    
			if(*format != '%') // This solves '%%'
			{
				write(1, format, 1);  
				ch_p++;
			}
			else if(*format == 'c')
			{
				c = va_arg(args, int); //Use va_arg(list,char) for ch
				write(1, &c, 1);
				ch_p++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				write(1, str, ft_strlen(str));
				ch_p += ft_strlen(str);
			}
}

int	ft_prints1(char const *format, int ch_p, va_list args)
{
	while(*format)
	{
		if(*format != '%')
		{
			write(1, format, 1); //Write the ch to the standard output
			ch_p++;
		}
		else					 //If format is the % sign
		{
			format++;			 //Skip '%' - Check next ch
            if(*format == '\0')
				break;
			ft_print_ch(format, ch_p, args);
		}
		format++;
	}
    return (ch_p);
}
