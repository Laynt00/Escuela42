/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 13:08:06 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/25 10:43:56 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*s;
	unsigned char		*d;
	size_t				i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	while (dst == src || !n)
	{
		return (dst);
	}
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}

/* struct {
  char name[40];
  int age;
} person, person_copy;

int main()
{
	char myname[] = "Pierre de Fermat";

  memcpy ( person.name, myname, strlen(myname)+1 );
  printf ("person: %s,\n", person.name);
	return 0;
} */
