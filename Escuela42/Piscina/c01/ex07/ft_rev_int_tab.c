/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 10:25:54 by alvartor          #+#    #+#             */
/*   Updated: 2023/09/25 21:19:22 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int		i;
	int		z;
	int		aux;

	i = 0;
	z = size - 1;
	while (i < (size / 2))
	{
		aux = tab[i];
		tab[i] = tab[z];
		tab[z] = aux;
		i++;
		z--;
	}
}
