COMPILER = cc

CFLAGS = -Wall -Wextra -Werror -Imlx

RED = \033[0;31m
GREEN = \033[0;32m
RESET = \033[0m

MLX = -L mlx/ -lmlx -lXext -lX11

MANDATORY = mandatory/events.c \
			mandatory/card_parsing.c \
			mandatory/display.c \
			mandatory/motion.c \
			mandatory/so_long.c \
			mandatory/check_path.c \
			mandatory/get_next_line.c \
			mandatory/get_next_line_utils.c


OBJM = ${MANDATORY:.c=.o}

NAME = so_long
BONUS_NAME = so_long_bonus

LIBFT = libft/libft.a

HEADER = mandatory/so_long.h \
		libft/libft.h \
		mandatory/get_next_line.h


all: ${NAME}

${NAME} : ${OBJM} ${LIBFT}
	@echo "${RED}🚀 Launching compilation...${RESET}"
	${COMPILER} ${CFLAGS} ${OBJM} ${LIBFT} ${MLX} -o ${NAME}
	@echo "${GREEN}✅ ${NAME} successfully compiled!${RESET}"

mandatory/%.o: mandatory/%.c ${HEADER}
	${COMPILER} ${CFLAGS} -c $< -o $@

${LIBFT}:
	make -C libft

clean:
	${RM} ${OBJM} $(OBJB)
	make clean -C libft
	@echo "${RED}🗑 Object files removed!${RESET}"

fclean: clean
	${RM} ${NAME} ${BONUS_NAME}
	make fclean -C libft
	@echo "${RED}🔥 Executable removed!${RESET}"

re: fclean all

.PHONY: all clean fclean re
