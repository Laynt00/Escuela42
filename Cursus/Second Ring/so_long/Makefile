# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvartor <alvartor@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/16 11:42:20 by alvartor          #+#    #+#              #
#    Updated: 2024/05/16 11:48:32 by alvartor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# COLOR CODES

END=$'\x1b[0m
BOLD=$'\x1b[1m
UNDER=$'\x1b[4m
REV=$'\x1b[7m
GREY=$'\x1b[30m
RED=$'\x1b[31m
GREEN=$'\x1b[32m
YELLOW=$'\x1b[33m
BLUE=$'\x1b[34m
PURPLE=$'\x1b[35m
CYAN=$'\x1b[36m
WHITE=$'\x1b[37m


OBJS_SL = $(SRCS_SL:.c=.o)
SRCS_SL = $(addprefix $(SRC_DIR)/, \
core/main.c core/init.c core/draw.c core/error.c core/hook.c core/sprite1.c core/sprite2.c \
parsing/parsing1.c parsing/parsing2.c \
tools/debug.c tools/fps.c tools/hud.c \
player/player.c player/player_position.c player/player_action.c player/player_distance.c player/player_mouvement.c \
player/player_gravity.c player/player_draw.c player/player_count_movement.c player/player_sprite1.c player/player_sprite2.c \
monster/monster.c monster/monster_distance.c monster/monster_position.c monster/monster_interaction.c monster/monster_movement.c monster/monster_sprite1.c \
other/wall.c other/background.c other/item.c other/gate.c \
)

OBJS_UTEST = $(SRC_UTEST:.c=.o)
SRC_UTEST = $(addprefix ./.utests/, \
main.c error.c \
test_null.c \
)

SRC_DIR	= ./src
INC_DIR	= ./includes/
CC = gcc
MF = Makefile

ifeq ($(DEBUG), 1)
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g
else
CFLAGS = -Wall -Wextra -Werror
endif

UNAME = $(shell uname -s)
NAME = so_long
LIBFT_PATH = ./libft/libft.a
LIBTEST_PATH = ./libft/libtest.a
SL_HEADER_FILE = $(INC_DIR)/so_long.h
UTEST_NAME = utest
UTEST_HEADER_FILE = $(INC_DIR)/utest.h


all : _libft _mlx $(NAME)

$(NAME) : $(MF) $(OBJS_SL) $(LIBFT_PATH) $(MLX_PATH)
	@$(CC) $(CFLAGS) $(OBJS_SL) $(LIBFT_PATH) $(MLX_PATH) $(GFLAGS) -o $(NAME) 
	@echo "\n${GREEN}> Compilation of so_long is success 🎉${END}"

./.utests/%.o : ./.utests/%.c $(UTEST_HEADER_FILE) $(MF)
	@/bin/echo -n .
	@$(CC) $(CFLAGS) -c $< -o $@  -I $(INC_DIR) 

%.o : %.c $(SL_HEADER_FILE) $(MF)
	@/bin/echo -n .
	@$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

clean :
	@make clean -C ./libft
	@make clean -C $(GPATH)
	@rm -f $(OBJS_SL)
	@rm -f $(OBJS_UTEST)
	@echo "${YELLOW}> All objects files of so_long have been deleted ❌${END}"

fclean : clean
	@make fclean -C ./libft
	@make clean -C $(GPATH)
	@rm -f $(NAME)
	@rm -f $(UTEST_NAME)
	@echo "${YELLOW}> Cleaning of so_long has been done ❌${END}"

re: fclean all

_libft :
	@make -C ./libft DEBUG=$(DEBUG)

_test :
	@make test -C ./libft DEBUG=$(DEBUG)

_mlx :
	@make -C $(GPATH)

test: _libft _mlx _test $(UTEST_NAME)

$(UTEST_NAME) : $(MF) $(OBJS_UTEST) $(LIBTEST_PATH) $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(OBJS_UTEST) $(LIBTEb	ST_PATH) $(LIBFT_PATH) $(MLX_PATH) -o $(UTEST_NAME)
	@echo "\n${GREEN}> Compilation of unit tests is success 🎉${END}"

.PHONY:	all test clean fclean re lib