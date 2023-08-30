# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/13 14:06:42 by lamasson          #+#    #+#              #
#    Updated: 2023/08/30 21:17:56 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME			= Account
CXX				= clang++
CXXFLAGS		= -g3
RM				= rm -rf

SRC				= Account.cpp \
				  tests.cpp

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
