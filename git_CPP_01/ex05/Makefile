# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 13:50:39 by gcot              #+#    #+#              #
#    Updated: 2023/09/20 14:43:23 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Harl.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Harl

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	g++ $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)
