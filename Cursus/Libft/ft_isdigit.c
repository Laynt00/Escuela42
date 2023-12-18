/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:33:06 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/18 12:11:01 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int  c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}