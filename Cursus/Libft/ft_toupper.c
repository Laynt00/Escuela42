/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:54:45 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/20 13:04:25 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

    // The toupper() function converts a lower-case letter to the corresponding upper-case
    //  letter.  The argument must be representable as an unsigned char or the value of EOF.

    //  Although the toupper() function uses the current locale, the toupper_l() function may
    //  be passed a locale directly. See xlocale(3) for more information.

    int ft_toupper(int c)
    {
        if (c >= 97 && c <= 122)
            return (c - 32);
        else 
            return (c);
    }