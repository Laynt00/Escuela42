/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:24:55 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/18 23:06:50 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*str;
	unsigned char	s1_len;
	unsigned char	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, s1_len + 1);
	ft_strlcpy((str + s1_len), s2, s2_len + 1);
	return (str);
}

/* int main()
{
	char *str = "GO GOGO";
	char *str2 = "Power Rangerssasdasdqweqweqwe123123123123!";
	char *str3 = ft_strjoin(str, str2);
	printf("%s\n", str3);

	return 0;
} */
