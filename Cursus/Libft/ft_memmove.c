/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:02:41 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/02 18:24:54 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // The memmove() function copies len bytes from string src to string dst.  The two
    // strings may overlap; the copy is always done in a non-destructive manner.
#include<stdio.h>  
#include<string.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
   char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (d > s)
		while (len > 0)
		{
		d[len] = s[len];
		len--;
		}
	else
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	return (dst);
}