# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 15:57:38 by tfarenga          #+#    #+#              #
#    Updated: 2020/10/22 16:30:34 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CLANG = clang++

FLAG = -Wall -Wextra -Werror

HEADERS =  phonebook.hpp phone.hpp

SRC = phonebook.cpp phone.cpp main.cpp

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