/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 09:09:21 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/21 19:20:08 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 122;
	while (i <= 122 && i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}

// int main () {

//     ft_print_reverse_alphabet();
// 	return(0);
// }