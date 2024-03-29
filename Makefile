# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mjavadi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/31 02:42:09 by mjavadi           #+#    #+#              #
#    Updated: 2023/07/31 02:56:40 by mjavadi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary Name:
NAME	=
CLIENT	=	client
SERVER	=	server

#ft_printf Variables:
LIBFTPRINTF	=	ft_printf/libftprintf.a
LIBFTPRINTF_DIR	=	ft_printf

#minitalk variables
SRC_C	=	ft_client.c
SRC_S	=	ft_server.c
OBJ_S	=	ft_server.o
OBJ_C	=	ft_client.o
INC		=	ft_minitalk.h

#Compiling Variables:
CC			=	gcc
CFLAG		=	-Wall -Wextra -Werror
RM			=	rm -rf

#Colors:
GREEN		=	\e[38;5;118m
YELLOW		=	\e[38;5;226m
RESET		=	\e[0m
_SUCCESS	=	[$(GREEN)SUCCESS$(RESET)]
_INFO		=	[$(YELLOW)INFO$(RESET)]

all: $(LIBFTPRINTF) $(CLIENT) $(SERVER)

$(CLIENT): $(OBJ_C) $(INC)
	@ $(CC) $(CFLAGS) -o $@ $(OBJ_C) $(LIBFTPRINTF)
	@printf "$(_SUCCESS) Client ready!\n"

$(SERVER): $(OBJ_S) $(INC)
	@ $(CC) $(CFLAGS) -o $@ $(OBJ_S) $(LIBFTPRINTF)
	@printf "$(_SUCCESS) Server ready!\n"

%.o: %.c
	@ $(CC) $(CFLAGS) -c $< -o $@

$(LIBFTPRINTF):
	@ $(MAKE) -C $(LIBFTPRINTF_DIR)

clean:
	@ $(MAKE) clean -C $(LIBFTPRINTF_DIR)
	@ $(RM) $(OBJ_C) $(OBJ_S)
	@printf "$(_INFO) Object files removed.\n"

fclean: clean
	@ $(MAKE) fclean -C $(LIBFTPRINTF_DIR)
	@ $(RM) $(CLIENT) $(SERVER)
	@printf "$(_INFO) Client removed.\n"
	@printf "$(_INFO) Server removed.\n"

re: fclean all

.PHONY: all clean fclean re
