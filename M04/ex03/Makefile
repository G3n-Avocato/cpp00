# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/23 18:55:01 by lamasson          #+#    #+#              #
#    Updated: 2023/09/11 21:12:33 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= AMateria
CXX				= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -g3
RM				= rm -rf

SRC				= main.cpp

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
