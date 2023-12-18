/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:21:17 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/18 13:20:02 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// The memset() function writes len bytes of value c (converted to an
    //  unsigned char) to the string b.

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char	*s;
	size_t			i;

	i = 0;
	s = b;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (b);
}