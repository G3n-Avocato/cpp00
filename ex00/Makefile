# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/23 14:19:21 by lamasson          #+#    #+#              #
#    Updated: 2023/07/23 21:57:09 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= megaphone
CXX			= clang++
CXXFLAGS	= -Wall -Wextra -Werror
RM			= rm -rf

SRC			= megaphone.cpp

OBJ			= ${SRC:%.cpp=%.o}

${NAME}: ${OBJ}
		@${CXX} ${CXXFLAGS} ${OBJ} -o ${NAME}

all:	${NAME}

clean:
		@${RM} ${OBJ}

fclean: clean
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
