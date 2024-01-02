/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:00:24 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/02 18:44:57 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // The strchr() function locates the first occurrence of c (converted to a char) in
    //  the string pointed to by s.  The terminating null character is considered to be
    //  part of the string; therefore if c is `\0', the functions locate the terminating
    //  `\0'.
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{
    unsigned int		i;

	i = 0;
	while (s[i] != c)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}

