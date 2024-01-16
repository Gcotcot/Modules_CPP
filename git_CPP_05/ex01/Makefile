# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcot <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 14:02:08 by gcot              #+#    #+#              #
#    Updated: 2023/10/28 15:00:17 by gcot             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp \
	Bureaucrat.cpp \
	Form.cpp

FLAGS = -Wall -Werror -Wextra -std=c++98

NAME = Bureaucrat 

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
