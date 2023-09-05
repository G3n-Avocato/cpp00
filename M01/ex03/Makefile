# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 22:57:55 by lamasson          #+#    #+#              #
#    Updated: 2023/08/12 22:59:32 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Unnecessary_violence
CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g3 -std=c++98
RM				= rm -rf

SRC				= main.cpp \
				  Weapon.cpp \
				  HumanA.cpp \
				  HumanB.cpp

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
