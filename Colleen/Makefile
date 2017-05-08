# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/17 23:21:27 by vpailhe           #+#    #+#              #
#    Updated: 2015/08/20 18:59:35 by vpailhe          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=Colleen

SRC = Colleen.c\

OBJ = Colleen.o\

FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(OBJ):
	gcc -c $(SRC) $(FLAG)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
