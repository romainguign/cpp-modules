# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 16:11:46 by roguigna          #+#    #+#              #
#    Updated: 2024/11/07 15:25:28 by roguigna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Intern

CXX				= c++

CXXFLAGS 		= -Wall -Wextra -Werror -std=c++98  

INCLUDE			= -I .

##############################  SOURCES  #####################################

SRC				= AForm.cpp  Bureaucrat.cpp ShrubberyCreationForm.cpp main.cpp \
				  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

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