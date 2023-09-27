/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 23:06:45 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/27 23:39:45 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size > 0)
	{
		while (*(src + i) != '\0')
		{
			if (i == size)
			{
				i--;
				break ;
			}
			*(dest + i) = *(src + i);
			i++;
		}
	}
	*(dest + i) = '\0';
	while (*(src + i) != '\0')
	{
		i++;
		return (i);
	}
	return (i);
}
/*
void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}

int main()
{
   	test(19);
    test(10);
    test(1);
    test(0);

    return(0);
}
*/