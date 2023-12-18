/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 11:30:43 by alvartor          #+#    #+#             */
/*   Updated: 2023/12/18 13:26:40 by alvartor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int                 ft_isalnum(int c);
int                 ft_isascii(int c);
int                 ft_isprint(int c);
size_t              ft_strlen(const char *s);
void               *ft_memset(void *b, int c, size_t len);
void                ft_bzero(void *s, size_t n);
void               *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void               *ft_memmove(void *dst, const void *src, size_t len);


#endif