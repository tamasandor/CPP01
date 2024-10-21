# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 13:36:43 by atamas            #+#    #+#              #
#    Updated: 2024/10/21 15:07:48 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp Zombie.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)

all = $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
