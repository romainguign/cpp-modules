# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 16:11:46 by roguigna          #+#    #+#              #
#    Updated: 2024/07/17 18:26:24 by roguigna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= BraiiiiiiinnnzzzZ

CXX				= c++

CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98 -g3 

INCLUDE			= -I .

##############################  SOURCES  #####################################

SRC				= main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

OBJ				= $(SRC:%.cpp=%.o)

##############################  RULES  #######################################

all: $(NAME)

$(NAME): $(OBJ) 
	@$(CXX) $(OBJ) $(CXXFLAGS) $(INCLUDE) -o $(NAME)

.cpp.o:
	@$(CXX) $(CXXFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus 