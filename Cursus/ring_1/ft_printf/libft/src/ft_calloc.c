/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 09:06:54 by alvartor          #+#    #+#             */
/*   Updated: 2024/03/06 11:24:45 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}

/* int main()
{
	int *str;
	int i, len;
	unsigned int a = 6; 
	str = ft_calloc(a, sizeof(int));
	
	len = ft_strlen((char *)str);
	i = 0;
	while (i++ < len)
		printf("%s ", (char *)str);
	return 0;
} */