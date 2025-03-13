/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:58:15 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/24 12:23:37 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

// digits the number of digits in number
int	digit_count(int n)
{
	int	digit;

	digit = 0;
	if (n <= 0)
		++digit;
	while (n && ++digit)
		n /= 10;
	return (digit);
}

char	*ft_itoa(int n)
{
	int			len;
	char		*ret;
	const char	*digits = "0123456789";

	len = digit_count(n);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ret[len] = 0;
	if (n == 0)
		ret[0] = '0';
	if (n < 0)
		ret[0] = '-';
	while (n)
	{
		if (n > 0)
			ret[--len] = digits[n % 10];
		else
			ret[--len] = digits[n % 10 * -1];
		n /= 10;
	}
	return (ret);
}

/* int main ()
{
  const char	*digits = "0123456789";
  printf("Pruebita->%d\n", 37 % 10 * -1);
  return 0;
} */