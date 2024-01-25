/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:08:56 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/21 13:25:19 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i >= 97 && i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}

// int main () {

//     ft_print_alphabet();
// 	return(0);
// }