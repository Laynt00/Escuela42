/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:15:09 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/27 22:32:09 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] = str[i] - 32 ;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
 char lowercase[] = "abcdefghijklmnopqrstuvwxyz123ASDZasdasd$·%&/";
	char *p_lwr;
	p_lwr = lowercase;
	

	printf("%s\n", ft_strupcase(p_lwr));

}
*/