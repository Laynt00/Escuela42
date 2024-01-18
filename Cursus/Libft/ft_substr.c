/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:51:33 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/18 16:37:37 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	k = len;
	i = start;
	j = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s))
		k = ft_strlen(s);
	str = malloc((sizeof(char)) * (k + 1));
	if (!str)
		return (0);
	while (i < ft_strlen(s) && j < len)
	{
		str[j] = s[i + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

/* // Implement `substr()` functi on in C
int main()
{
	char src[] = "substrfunctionImplementation";

	int m = 7;
	int n = 8;

	char* dest = ft_substr(src, m, n);

	printf("%s\n", dest);

	return 0;
} */