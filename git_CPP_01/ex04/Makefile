# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 13:50:39 by gcot              #+#    #+#              #
#    Updated: 2023/09/19 13:55:18 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = File

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
