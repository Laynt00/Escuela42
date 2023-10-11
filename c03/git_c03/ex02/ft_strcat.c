/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:19:25 by alvartor          #+#    #+#             */
/*   Updated: 2023/10/04 15:36:00 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;

	i = 0;
	while (dest[i])
		i++;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int main(void)
{
	char str1[100] = "Alvaro ", str2[] = "Torres";
	printf("%s", ft_strcat(str1, str2));
	return (0);
}  */