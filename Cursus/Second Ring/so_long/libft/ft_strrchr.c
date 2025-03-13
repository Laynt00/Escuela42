/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 18:47:33 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/22 10:50:46 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		pos_c;

	pos_c = -1;
	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			pos_c = i;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s + i);
	if (pos_c == -1)
		return (NULL);
	return ((char *)s + pos_c);
}

/* int main ()
{
	printf("Strrchr Original: %s\n", strrchr("teste", '\0'));
	printf("Strrchr : %s\n", ft_strrchr("teste", '\0'));
	return 0;
} */
