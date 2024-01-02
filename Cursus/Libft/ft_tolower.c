/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:05:02 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/20 13:06:05 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

        // The tolower() function converts an upper-case letter to the corresponding lower-case
        // letter.  The argument must be representable as an unsigned char or the value of EOF.

        int ft_tolower(int c)
    {
        if (c >= 65 && c <= 90)
            return (c + 32);
        else 
            return (c);
    }