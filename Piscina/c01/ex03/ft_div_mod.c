/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 09:39:26 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/24 09:48:27 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	int b;
// 	int mod;
// 	int div;

// 	a = 5;
// 	b = 5;

// 	ft_div_mod(a, b, &div, &mod);

// 	printf("a : %d, b : %d, div : %d, mod : %d\n", a, b, div, mod);
// }