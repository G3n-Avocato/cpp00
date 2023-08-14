# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 19:09:02 by lamasson          #+#    #+#              #
#    Updated: 2023/08/14 19:11:04 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= HarlFilter
CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g3
RM				= rm -rf

SRC				= main.cpp \
				  Harl.cpp

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

