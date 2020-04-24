# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 19:14:09 by epuclla           #+#    #+#              #
#    Updated: 2020/04/23 16:36:16 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

NAME = libft.a

CFLAGS = -I . -Wall -Wextra -Werror

SOURCES = ft*.c

OBJ = ft*.o

INCLUDES=./

all: $(NAME)

$(NAME):$(SOURCES) libft.h
	@$(CC) $(CFLAGS) -I$(INCLUDES) -c $(SOURCES)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all