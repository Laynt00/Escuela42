/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:10:36 by alvartor          #+#    #+#             */
/*   Updated: 2024/02/05 18:03:47 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "printf.h"

void				check_width_and_prec(va_list ap,
		char *format, t_info *info, int i)
{
	if (ft_isdigit(format[i]))
	{
		if (info->prec == -1)
			info->width = info->width * 10 + format[i] - 48;
		else
			info->prec = info->prec * 10 + format[i] - 48;
	}
	else if (format[i] == '*')
	{
		if (info->prec == -1)
		{
			info->width = va_arg(ap, int);
			if (info->width < 0)
			{
				info->minus = 1;
				info->width *= -1;
			}
		}
		else
			info->prec = va_arg(ap, int);
	}
}

void				check_info(va_list args, char *format, t_info *info, int i)
{
	if (format[i] == '0' && info->width == 0 && info->prec == -1)
		info->zero = 1;
	else if (format[i] == '-')
		info->minus = 1;
	else if (format[i] == '.')
		info->prec = 0;
	else if (ft_isdigit(format[i]) || format[i] == '*')
		check_width_and_prec(args, format, info, i);
}

int					parse_format( char *format, va_list args)
{
	int				i;
	int				ret;
	t_info			*info;

	i = 0;
	ret = 0;
	if (!(info = malloc(sizeof(t_info) * 1)))
		return (-1);
	while (format[i] != '\0') 
	{
		while (format[i] != '%' && format[i] != '\0') //Mientras el argumento no sea un formato
			ret += ft_putchar(format[i++]);
		if (format[i] == '%')		//when its a format '%'
		{
			init_info(info);        //Create the structure
			while (format[++i] != '\0' && !(ft_strchr(TYPE, format[i]))) //Control
				check_info(args, format, info, i);
			info->type = format[i++];
			if ((info->minus == 1 || info->prec > -1) && info->type != '%')
				info->zero = 0;
			ret += print_type(args, info);
		}
	}
	free(info);
	return (ret);
}

void				check_info(va_list ap, char *format, t_info *info, int i)
{
	if (format[i] == '0' && info->width == 0 && info->prec == -1)
		info->zero = 1;
	else if (format[i] == '-')
		info->minus = 1;
	else if (format[i] == '.')
		info->prec = 0;
	else if (ft_isdigit(format[i]) || format[i] == '*')
		check_width_and_prec(ap, format, info, i);
}

int ft_printf(char const *format, ...)
{
    int			ret;
    va_list		args; // To inicialice the num of arg we're gonna take
	
	va_start(args, format);

	ret = parse_format((char *)format, args);
	va_end(args);  //Ends the list of arguments
	return (ret);
}

int main()
{
    /* ft_printf("Leo\n");
	ft_printf("%c\n", "S");
	ft_printf("%s\n", "String");
	ft_printf("%%\n"); */
	printf("%d\n", 2);
	return 0;
}