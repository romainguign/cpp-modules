# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 16:11:46 by roguigna          #+#    #+#              #
#    Updated: 2024/10/10 13:44:47 by roguigna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Brain

CXX				= c++

CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98  

INCLUDE			= -I .

##############################  SOURCES  #####################################

SRC				= main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAAnimal.cpp WrongCat.cpp Brain.cpp

OBJ				= $(SRC:%.cpp=%.o)

##############################  RULES  #######################################

all: $(NAME)

$(NAME): $(OBJ) 
	$(CXX) $(OBJ) $(CXXFLAGS) $(INCLUDE) -o $(NAME)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 