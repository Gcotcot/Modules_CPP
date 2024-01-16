# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:02:08 by gcot              #+#    #+#              #
#    Updated: 2023/09/18 16:22:03 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	HumanA.cpp \
	HumanB.cpp \
	Weapon.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = War 

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
