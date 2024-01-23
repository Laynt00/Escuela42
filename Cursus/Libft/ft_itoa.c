/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:58:15 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/23 12:35:40 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// A utility function to reverse a string
void reverse(char str[], int length)
{
    int start = 0;
    int end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        end--;
        start++;
    }
}
// digits the number of digits in number
int	digit_count(int n)
{
	int		digit;

	digit = 0;
	while (n)
	{
		n /= 10;
		digit++;
	}
	return (digit);
}

char *ft_itoa(int n)
{
	int		d_count;
    bool 	isNegative;
	char	*str;
	
	isNegative = false;
	d_count = digit_count(n) + isNegative;
	printf ("Digitos en el int: %d\n",digit_count(d_count));
	str = malloc(sizeof(char) * (digit_count(n) + 1));
	if(!str)
		return (NULL);
	/* if (n < 0 )
	{
        isNegative = true;
        n = -n;
    }
	if (n == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}
	// Process individual digits
    while (n != 0)
	{
        rem = n % 10;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        n = n / 10; // Divides by base 10
    }
	
	if (isNegative)
        str[i++] = '-';
    reverse(str, i);
	str[i] = '\0'; */
	return (0);
}

#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i = -9;
  
  printf ("Numero en string: %s\n",ft_itoa(i));
  return 0;
}