# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 19:14:09 by epuclla           #+#    #+#              #
#    Updated: 2020/03/01 20:35:46 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJECTS = *.o 
SOURCES = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c \
		  ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		  ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c \
		  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		  ft_isprint.c ft_toupper.c ft_tolower.c


INCLUDES = libft.h

INCLUDES = libft.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I $(INCLUDES) -c $(SOURCES)
	ar rc $(NAME) *.o
	
clean:
	/bin/rm -f $(OBJECTS)

fclean:
	/bin/rm -f $(NAME)
	/bin/rm -f $(OBJECTS)

re: fclean all

.PHONY: all clean fclean re
