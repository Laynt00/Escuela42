/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:43:35 by alvartor          #+#    #+#             */
/*   Updated: 2023/10/05 17:42:30 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i])
		i++;
	while (src[res])
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

/* #include <stdio.h>
#include <string.h>

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 50;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);


    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("Truncated");
    else
        puts("Fully copied");

    return(0);
} */