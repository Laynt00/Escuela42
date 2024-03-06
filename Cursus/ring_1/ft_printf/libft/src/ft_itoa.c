/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:58:15 by alvartor          #+#    #+#             */
/*   Updated: 2024/03/06 11:22:34 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Allocates (with malloc) and returns a string representing the integer 
*	received as an argument. Negative numbers must be handled.
*	PARAMETERS
*	#1. the integer to convert.
*	RETURN VALUES
*	The string representing the integer. NULL if the allocation fails.
*/

#include "../libft.h"
#include <stdlib.h>

static size_t	ft_intlen(int n)
{
	int	count;

	count = 1;
	if (n < 0 && n != -2147483648)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*each_number(char *s, int n, int cont)
{
	int	negative;
	int	n2;

	negative = 0;
	if (n < 0)
	{
		n = -n;
		s[0] = '-';
		negative = 1;
		cont--;
	}
	while (cont--)
	{
		n2 = n % 10;
		s[cont + negative] = '0' + n2;
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		cont;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = ft_calloc(ft_intlen(n) + 1, sizeof(char));
	if (s == NULL)
		return (NULL);
	cont = ft_intlen(n);
	s = each_number(s, n, cont);
	s[ft_intlen(n)] = '\0';
	return (s);
}
