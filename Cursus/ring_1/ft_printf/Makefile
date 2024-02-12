#Variables

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra 
AR = ar rcs
RM = rm -f
LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a

#Sources

SRCS	=	ft_printf utils/ft_utils

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

OBJS = $(SRCS:.c=.o)

###

$(NAME): $(LIBFT) $(OBJS)
	cp $(LIBFT) $(NAME)
	$(AR) $@ $^

$(LIBFT):
	make -C $(LIBFT_PATH) all

all:		$(NAME)

fclean: clean
	$(RM) $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

clean:
	$(RM) $(OBJS)
	make -C $(LIBFT_PATH) clean

norm:
			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm