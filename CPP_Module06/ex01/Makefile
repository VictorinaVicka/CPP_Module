# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/09 16:12:36 by tfarenga          #+#    #+#              #
#    Updated: 2020/12/09 16:42:24 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CLANG = clang++

FLAG = -Wall -Wextra -Werror

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) -o $@ $^ $(FLAG)

%.o : %.cpp
	$(CLANG) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all