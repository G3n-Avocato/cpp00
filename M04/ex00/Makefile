# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:55:01 by lamasson          #+#    #+#              #
#    Updated: 2023/08/23 19:41:27 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Animal
CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g3
RM				= rm -rf

SRC				= main.cpp \
				  Animal.cpp \
				  Dog.cpp \
				  Cat.cpp

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
