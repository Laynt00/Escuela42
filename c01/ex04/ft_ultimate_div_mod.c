/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 10:57:23 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/26 10:59:09 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int main(void)
// {
//     int num1;
//     int num2;
//     int a;
//     int b;
//     num1 = 4;
//     num2 = 2;
//     a = num1;
//     b = num2;
//     ft_ultimate_div_mod(&a, &b);
//     printf("El resultado de la division es: ""%d\n", a);
//     printf("El resto de la division es: ""%d\n", b);
//     return (0);
// }
