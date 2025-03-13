NAME		= so_long
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= so_long.c \
			  image.c \
			  movement.c \
			  map.c \
			  utils.c \
			  get_next_line.c \
			  get_next_line_utils.c \



OBJS		= $(SRCS:%.c=%.o)

LIBC		= ar rc

FLAGS		= -Wall -Wextra -Werror

# Códigos de escape ANSI para colores
GREEN = \033[0;32m
BLUE = \033[0;34m
RED = \033[0;31m
RESET = \033[0m

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		make all -C $(LIBFT)/
		gcc -o $(NAME) $(OBJS) -Llibft -lft -L mlx/ -lmlx -lXext -lX11
		@echo "$(GREEN)✅ Compilación exitosa: $(TARGET) se ha creado correctamente."

%.o			:	%.c
		gcc $(FLAGS) -c $^ -I./ -o $@


clean		:
		rm -f $(OBJS)
		make clean -C $(LIBFT)
		@echo "$(RED)🧹 Archivos objeto y ejecutable eliminados."

fclean		:	clean
		rm -f $(NAME)
		rm -f $(LIBFT_LIB)
		make fclean -C $(LIBFT)

re			:	fclean all

.PHONY		:	all clean fclean re bonus