# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:02:08 by gcot              #+#    #+#              #
#    Updated: 2023/11/05 14:28:01 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Base.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Base

OBJ = $(SRC:.cpp=.o)

%.o: %.cpp
	g++ $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	g++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	clear && rm -f $(NAME)

re: fclean $(NAME)
