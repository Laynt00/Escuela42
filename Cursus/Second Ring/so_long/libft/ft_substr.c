/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 22:51:33 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/18 17:29:47 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "includes/libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	new_len;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else
	{
		new_len = ft_strlen(s + start);
		if (!(new_len < len))
			new_len = len;
		sub = (char *)malloc(sizeof(char) * (new_len + 1));
		if (!sub)
			return (NULL);
		sub[new_len] = 0;
		while (new_len-- > 0)
			sub[new_len] = s[start + new_len];
	}
	return (sub);
}

/* // Implement `substr()` function in C
int main()
{
	char src[] = "abcd";

	int m = 2;
	int n = 2393; 

	char* dest = ft_substr(src, m, n);

	printf("%s\n", dest);

	return 0;
} */