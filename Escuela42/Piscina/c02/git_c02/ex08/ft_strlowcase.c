/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 22:33:42 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/27 22:37:36 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		str[i] = str[i] + 32 ;
		}
		i++;
	}
	return (str);
}

/*
int main(void)
{
 char uppercase[] = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ123ASDZasdasd$·%&/";
	char *p_upp;
	p_upp = uppercase;
	

	printf("%s\n", ft_strlowcase(p_upp));

}
*/
