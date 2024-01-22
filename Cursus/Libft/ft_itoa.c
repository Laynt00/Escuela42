/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:58:15 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/22 13:49:06 by alvartor         ###   ########.fr       */
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
// Counts the number of digits in the number
int	num_len(int n)
{
	int		count;

	count = 0;
	while (n != 0)
	{
		n /= 10;
		++count;
	}
	return (count);
}

char *ft_itoa(int n)
{
	int		i;
    bool 	isNegative;
	int		rem;
	char	*str;
	
	i = 0;
	isNegative = false;
	str = malloc(sizeof(char) * (num_len(n) + 1));
	if (n < 0 )
	{
        isNegative = true;
        n = -n;
    }
	// Process individual digits
    while (n != 0)
	{
        rem = n % 10;
        str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
        n = n / 10; // Divides by base 10
    }
	if (n == 0)
	{
		str[i] = '0';
		return (str);
	}
	if (isNegative)
        str[i++] = '-';
	str[i] = '\0';
    reverse(str, i);
	return (str);
}


#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int i = 0;
  printf ("Digitos en el int: %d\n",num_len(i));
  printf ("Numero en string: %s\n",ft_itoa(i));
  return 0;
}