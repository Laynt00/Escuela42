LIB = ar rcs

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a
SRC = ft_isalpha.c 
	  
	  

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