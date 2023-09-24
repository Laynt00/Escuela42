/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:26:13 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/24 09:38:34 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

// #include <stdio.h>

// int main(void)
// {
// 	int a = 3;
// 	int b = 5;
// 	int *we = &a;
// 	int *wa = &b;
// 	ft_swap(we, wa);
// 	printf("Cambiando valores %d and %d", a, b);
// }
