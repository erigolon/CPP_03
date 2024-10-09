# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: erigolon <erigolon@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 14:27:47 by erigolon          #+#    #+#              #
#    Updated: 2024/10/09 10:03:16 by erigolon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= ClapTrap

SRC		= main.cpp \
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp \
			DiamondTrap.cpp

OBJ		= $(SRC:.cpp=.o)

CXX		= c++ -g

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -Wshadow

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re