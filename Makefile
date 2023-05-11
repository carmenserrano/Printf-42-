# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cserrano <cserrano@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/11 12:56:42 by cserrano          #+#    #+#              #
#    Updated: 2023/05/11 16:30:05 by cserrano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= 	libftprintf.a

SRC	= 	ft_tool1.c ft_tool2.c ft_printf.c \

OBJT	= 	$(SRC:.c=.o) 

CC 		= 	gcc -c

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all:	$(NAME)

$(NAME):	
	$(CC) $(CFLAGS) $(SRC)
	ar rcs $(NAME) $(OBJT)
clean:
	$(RM) $(OBJT)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
