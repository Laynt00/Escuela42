/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:10:36 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/31 11:42:46 by alvartor         ###   ########.fr       */
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
	ch_print = ft_prints1(format, ch_print, args);
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