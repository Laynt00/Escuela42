/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mov.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:50:25 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/24 11:43:25 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;

	div = *a / *b;
	*b = *a % *b;
	*a = div;
}

/*
#include <stdio.h>
int main()
{
	int a;
	int b;
	a = 5;
	b = 2;
	printf("a : %d, b : %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a : %d, b : %d\n", a, b);	
}
*/
