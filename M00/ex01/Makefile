# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lamasson <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 14:01:48 by lamasson          #+#    #+#              #
#    Updated: 2023/08/11 14:10:12 by lamasson         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Phonebook
CXX				= clang++
CXXFLAGS		= -Wall -Wextra -Werror -g3
RM				= rm -rf

SRC				= Contact.cpp \
				  Phonebook.cpp \
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

