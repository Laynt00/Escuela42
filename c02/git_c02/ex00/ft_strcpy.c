/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 21:32:22 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/28 13:33:45 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
//#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	char my_str2[] = "";
	char my_dst2[] = {' ', ' ', ' '};
	printf("Mi funcion ft_strcpy: %s\n", ft_strcpy(my_dst2, my_str2));
	return (0);
}
*/