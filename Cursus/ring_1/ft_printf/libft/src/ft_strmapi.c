/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 09:14:35 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/23 09:40:06 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned long i;
	unsigned long l;
	char          *str;

	l = ft_strlen(s);
	str = (char*)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < l)
	{
		str[i] = (*f)(i, str[i]);
		++i;
	}
	str[i] = 0;
	return (str);
} */

/* int int main(int argc, char const *argv[])
{
	char *str = "Hola holita vecinito"
	printf("La string antes: %s\n", str);
	printf("La string despues: %s\n", ft_strmapi(str,));
	return 0;
} */
