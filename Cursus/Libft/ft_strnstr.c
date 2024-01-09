/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:12:45 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/09 12:51:55 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t			i;
	size_t			c;
	size_t			n_len;
	unsigned char	*str;
	unsigned char	*str2;

	str = (unsigned char *)haystack;
	str2 = (unsigned char *)needle;
	n_len = ft_strlen(needle);
	i = 0;
	if (n_len == 0 || haystack == needle)
		return ((char *)haystack);
	while ((str) && (i < len))
	{
		c = 0;
		while (str[i + c] != '\0' && str2[c] != '\0'
			&& str[i + c] == str2[c] && i + c < len)
			c++;
		if (c == n_len)
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	printf("%s\n", strnstr("HolA", "ol", 4));
//     printf("%s\n", ft_strnstr("HolA", "ol", 4));
//     return 0;
// }