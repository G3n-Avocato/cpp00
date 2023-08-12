# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/12 20:04:43 by lamasson          #+#    #+#              #
#    Updated: 2023/08/12 20:09:12 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Brainz
CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g3
RM				= rm -rf

SRC				= newZombie.cpp \
				  randomChump.cpp \
				  Zombie.cpp \
				  main.cpp

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
