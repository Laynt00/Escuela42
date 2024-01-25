/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:43:05 by alvartor          #+#    #+#             */
/*   Updated: 2024/01/09 12:50:53 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && (*str >= '0' && *str <= '9'))
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

// int	main(void)
// {
//    int val;
//    char str[20];

//    strcpy(str, "42asdasdas");
//    val = ft_atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);
//    /* strcpy(str, "98993489");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val);

//    strcpy(str, "tutorialspoint.com");
//    val = atoi(str);
//    printf("String value = %s, Int value = %d\n", str, val); */

//    return(0);
// }