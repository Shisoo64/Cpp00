# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/21 16:40:05 by rlaforge          #+#    #+#              #
#    Updated: 2023/04/27 15:45:36 by rlaforge         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	main.cpp \
		phonebook.cpp \
		contact.cpp

OBJS = $(SRCS:.cpp=.o)

CFLAGS = -Wall -Werror -Wextra -std=c++98

RM = rm -f

CC = c++

NAME = phonebook

all: logo ${NAME}

logo :
	@echo " \e[1;34m __    __   ______   __  __   ______    \e[0m"
	@echo " \e[1;34m/\ \"-./  \ /\  __ \ /\ \/ /  /\  ___\   \e[0m"
	@echo " \e[1;34m\ \ \-./\ \\\\\\ \  __ \\\\\\ \  _\"-.\ \  __\   \e[0m"
	@echo " \e[1;34m \ \_\ \ \_\\\\\\ \_\ \_\\\\\\ \_\ \_\\\\\\ \_____\ \e[0m"
	@echo " \e[1;34m  \/_/  \/_/ \/_/\/_/ \/_/\/_/ \/_____/ \e[0m\n\n"

${NAME} :	${OBJS}
		@${CC} ${OBJS} -o ${NAME}
		@echo "\e[1A\e[2K\e[1;32m📦 $(NAME) compiled!\n\e[0m"

%.o	: %.cpp
		@${CC} ${CFLAGS} $< -c -o $@
		@echo "\e[1A\e[2K\e[1m🗜️ Compiling $@\e[0m"

clean:
		@echo "\e[1;91m🧹 Cleaning binary files\e[0m"
		${RM} ${OBJS}
 
fclean:	clean
		@echo "\e[1;91m🧹 Cleaning executable\e[0m"
		${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean logo re



