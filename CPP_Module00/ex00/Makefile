# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tfarenga <tfarenga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/15 15:27:26 by tfarenga          #+#    #+#              #
#    Updated: 2020/10/15 15:50:32 by tfarenga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CLANG = clang++

FLAG = -Wall -Wextra -Werror

SRC = megaphone.cpp

.PHONY: all fclean re

all: $(NAME)

$(NAME): $(SRC)
	$(CLANG) $(FLAG) $(SRC) -o $(NAME)

fclean:
	rm -rf $(NAME)

re: fclean all