/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 18:24:55 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/17 19:02:35 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* char *ft_strjoin(char const *s1, char const *s2)
{
    char			*str;
	int				len_s1;
	int				len_s2;
	unsigned int	i;
	unsigned int	j;
	
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!s1 && !s2) 	// Si estan vacios
		return (NULL);
	if (!s1)			
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	ft_strlcpy(str, s1);
	ft_strlcat(str, s2);
	return (str);
} */

/* int main()
{
	char *str = ft_strjoin("Go Go", "Power Rangers!");

	printf("%s\n", str);

	return 0;
} */