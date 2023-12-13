/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:06:27 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/13 12:31:41 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int  c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    else
        return (0);
}


// #include <stdio.h>
// #include <ctype.h>

// int main()
// {
//     int c = 'a';
//     printf("Funcion original: %d\n", isalpha(c));
//     printf("Mi funcion: %d\n",ft_isalpha(c));

//     return (0);
// }


