#Variables

NAME = libftprintf.a
LIBFT = libft
CC = cc
CFLAGS = -Wall -Werror -Wextra
LIBFTDIR = ./libft
AR = ar rcs

#Sources

SRCS	=	ft_printf.c ./utils/ft_utils.c

OBJS = $(SRCS:.c=.o)

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

###

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "$(GREEN)ft_printf compiled!$(DEF_COLOR)"

all:		$(NAME)

fclean: clean
	@rm -f $(NAME)
	@cd $(LIBFTDIR) && make fclean
	@echo "$(CYAN)ft_printf executable files cleaned!$(DEF_COLOR)"
	@echo "$(CYAN)libft executable files cleaned!$(DEF_COLOR)"

re:			fclean all
			@echo "$(GREEN)Cleaned and rebuilt everything for ft_printf!$(DEF_COLOR)"

clean:
	@rm -f $(OBJS)
	@cd $(LIBFTDIR) && make clean
	@echo "$(BLUE)ft_printf object files cleaned!$(DEF_COLOR)"

norm:
			@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY:		all clean fclean re norm