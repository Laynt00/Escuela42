/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 13:53:12 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/09 11:48:17 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	c = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (s && i < n)
	{
		if (str[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", memchr("Hola", 'o',0));
// 	printf("%s\n", ft_memchr("Hola", 'o',0));
// 	return 0;
// }