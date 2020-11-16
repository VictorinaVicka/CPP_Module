# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 12:49:54 by tfarenga          #+#    #+#              #
#    Updated: 2020/11/16 16:46:20 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
CC = clang++
FLAGS = -Wall -Wextra -Werror -I.

SRC = replace.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re