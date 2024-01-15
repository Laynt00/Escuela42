# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/18 11:24:22 by alvartor          #+#    #+#              #
#    Updated: 2024/01/10 10:54:11 by alvartor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c\
	  ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c\
	  ft_memcpy.c  ft_memmove.c	ft_strlcpy.c ft_strlcat.c\
	  ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c\
	  ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
	  ft_atoi.c ft_calloc.c ft_strdup.c
	  
	  

OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ) 

fclean: clean
	$(RM) $(NAME)

re: fclean all