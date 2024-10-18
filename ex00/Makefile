# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: atamas <atamas@student.42wolfsburg.de>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/18 12:30:40 by atamas            #+#    #+#              #
#    Updated: 2024/10/18 12:42:32 by atamas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

SRC = 
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