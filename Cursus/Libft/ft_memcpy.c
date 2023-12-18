/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:08:06 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/18 13:21:52 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // The memcpy() function copies n bytes from memory area src to memory area
    // dst.  If dst and src overlap, behavior is undefined.  Applications in
    // which dst and src might overlap should use memmove(3) instead.

#include <string.h>
#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    unsigned const char	*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
