# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/01 19:14:09 by epuclla           #+#    #+#              #
#    Updated: 2020/04/27 19:01:23 by epuclla          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror


SOURCES	= ft_isascii.c ft_isprint.c ft_isalpha.c ft_isdigit.c ft_isalnum.c \
										ft_tolower.c ft_toupper.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
										ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c \
										ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
										ft_memchr.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_itoa.c \
										ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
										ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c

SOURCES_B = ft_lstsize.c ft_lstlast.c ft_lstadd_front.c ft_lstadd_back.c \
														ft_lstnew.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \
														ft_ifzero_bonus.c ft_memalloc_bonus.c ft_memdel_bonus.c ft_putchar_bonus.c  \
														ft_putendl_bonus.c ft_putnbr_bonus.c ft_putstr_bonus.c ft_strcat_bonus.c ft_strclr_bonus.c  \
														ft_strcmp_bonus.c ft_strcpy_bonus.c ft_strdel_bonus.c ft_strequ_bonus.c ft_striter_bonus.c  \
														ft_striteri_bonus.c ft_strmap_bonus.c ft_strncat_bonus.c ft_strncpy_bonus.c ft_strnequ_bonus.c  \
														ft_strnew_bonus.c ft_strstr_bonus.c ft_strsub_bonus.c

OBJETS = $(SOURCES:%.c=%.o)
OBJECTS_B = $(SOURCES_B:%.c=%.o)

all: $(NAME)
$(NAME):
	@$(CC) $(CFLAGS) $(SOURCES) -I ./ 
	@ar rc $(NAME) $(OBJETS)
	@ranlib $(NAME)

bonus:
		@$(CC) $(CFLAGS)  $(SOURCES_B)  -I ./ 
		@ar rc $(NAME) $(OBJECTS_B)
		@ranlib $(NAME)

clean:
		@rm -f $(OBJETS) $(OBJECTS_B)

fclean: 	clean
		@rm -f $(NAME)

re: fclean all

testclall:
	@rm test*