/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 19:45:41 by laynt             #+#    #+#             */
/*   Updated: 2024/03/06 11:43:05 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"
#include "../libft/libft.h"

int	ft_printstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

void	ft_put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		ft_put_ptr(num / 16);
		ft_put_ptr(num % 16);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
			ft_putchar_fd((num - 10 + 'a'), 1);
	}
}

int	ft_print_ptr(unsigned long long ptr)
{
	int	len;
	int	print_length;

	len = 0;
	print_length = 0;
	print_length += write(1, "0x", 2);
	if (ptr == 0)
		print_length += write(1, "0", 1);
	else
	{
		ft_put_ptr(ptr);
		while (ptr != 0)
		{
			len++;
			ptr = ptr / 16;
		}
		print_length += len;
	}
	return (print_length);
}

int	ft_printnbr(int n)
{
	int		cont;
	char	c;

	cont = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		cont++;
	}
	if (n >= 10)
		cont += ft_printnbr(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
	cont++;
	return (cont);
}

int	ft_print_unsigned(unsigned int n)
{
	int		cont;
	char	c;

	cont = 0;
	if (n >= 10)
		cont += ft_print_unsigned(n / 10);
	c = '0' + n % 10;
	write(1, &c, 1);
	cont++;
	return (cont);
}
