# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/23 03:01:28 by mjavadi           #+#    #+#              #
#    Updated: 2023/03/23 03:01:43 by mjavadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

SRCS	= ft_printf.c ft_printfhex.c ft_printfnb.c ft_printfphex.c  

OBJS	= ${SRCS:.c=.o}

CC	= gcc
CFLAGS	= -Wall -Werror -Wextra

# COLORS
RESET=        \033[0m
DARK=        \033[1;32m
RED=        \033[31m
GREEN=        \033[32m
YELLOW=        \033[33m
BLUE=        \033[34m
MAGENTA=    \033[35m
CYAN=        \033[36m
WHITE=        \033[37m
BOLDBLACK=    \033[1m\033[30m
BOLDRED=    \033[1m\033[31m
BOLDWHITE=    \033[1m\033[37m
BOLDGREEN=    \033[1m\033[32m

all: ${NAME}

.c.o:

	@$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	@echo "${GREEN}LIBFT COMPILED ${RESET}"	
	@echo "$(MAGENTA)compiling printf... $(RESET)"
	@ar rcs ${NAME} ${OBJS}
	@echo "${GREEN}FT_PRINTF COMPILED ${RESET}"

clean:
	@rm -f ${OBJS}
	@make clean -C libft
	@echo "${BOLDGREEN}FT_PRINTF OBJECT FILES CLEANED !${RESET}"

fclean:	clean
	@rm -f ${NAME}
	@rm -f libft/libft.a
	@echo "${BOLDGREEN}FT_PRINTF AND LIBFT EXECUTABLE FILES CLEANED !${RESET}"

re:	fclean all

norm:			
	@norminette $(SRC) $(INCLUDE) $(LIBFT) | grep -v Norme -B1 || true

.PHONY: all clean fclean re
