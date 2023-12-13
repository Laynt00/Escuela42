/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:18:09 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/24 10:25:03 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	printf("%lu\n", strlen("qweqwe"));
// 	printf("%d\n", ft_strlen("qweqwe"));
// }