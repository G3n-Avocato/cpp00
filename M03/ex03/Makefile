# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/19 16:50:40 by lamasson          #+#    #+#              #
#    Updated: 2023/08/23 17:09:24 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= DiamondTrap
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -g3 -std=c++98
RM				= rm -rf

SRC				= main.cpp \
				  ClapTrap.cpp \
				  ScavTrap.cpp \
				  FragTrap.cpp	\
				  DiamondTrap.cpp

OBJ				= ${SRC:%.cpp=%.o}

${NAME}: ${OBJ}
		@${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

all:	${NAME}

clean:
		@${RM} ${OBJ}

fclean: clean
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
