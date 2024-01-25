LIB = ar rcs
INCLUDE = includes
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

NAME = libft.a 
SRC = ft_printf.c   	  
OBJ = $(SRC:.c=.o)

# Colors

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

#Sources

SRC 		= 	$(addprefix $(SRC_DIR)))
OBJ 		= 	$(addprefix $(OBJ_DIR)))

###


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	$(RM) $(OBJ)
	@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"
