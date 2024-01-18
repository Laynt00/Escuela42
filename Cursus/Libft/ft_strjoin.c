/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:24:55 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/18 17:41:24 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char	*str;
	char	*str2;
	
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!str)
		return (NULL);
	str2 = (char *)s2;
	ft_strlcpy(str, s1, sizeof(str));
	ft_strlcat(str, s2, sizeof(str2));
	return (str);
} 

int main()
{
	char *str = ft_strjoin("Go Go", "Power Rangers!");
	printf("%s\n", str);

	return 0;
}
