# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:02:08 by gcot              #+#    #+#              #
#    Updated: 2023/11/18 14:48:51 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	PmergeMe.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = PmergeMe

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	c++ $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	clear && rm -f $(NAME)

re: fclean $(NAME)
