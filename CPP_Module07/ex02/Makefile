# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 12:24:28 by tfarenga          #+#    #+#              #
#    Updated: 2020/12/14 13:55:20 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = template

CLANG = clang++

FLAG = -Wall -Wextra -Werror

HEADERS = Array.hpp

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CLANG) -o $@ $^ $(FLAG)

%.o : %.cpp $(HEADERS)
	$(CLANG) $(FLAG) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all