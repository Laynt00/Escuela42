/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:00:24 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/17 18:12:30 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int		i;

	i = 0;
	while (s[i] != (unsigned char) c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	if (c == '\0')
		return ((char *)s + i);
	return ((char *)s + i);
}

/* int main()
{
   char s[11] = "Hola amigos";
   char c = 'a';

   printf( "s=%s\t", s );
   printf( "c=%c\n", c );
   printf( "strchr=%s\n", ft_strchr(((void *)0), '\0') );

   return 0;
} */