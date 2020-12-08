# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/08 16:03:50 by tfarenga          #+#    #+#              #
#    Updated: 2020/12/08 16:41:50 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cast

CLANG = clang++

FLAG = -Wall -Wextra -Werror

HEADERS = Cast.hpp

SRC = Cast.cpp main.cpp

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