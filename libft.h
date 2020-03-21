/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:57:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 16:23:26 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <unistd.h>
#include <stdlib.h>

/*Libraries to test*/
#include <stdio.h>
#include <string.h>

void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memmove(void*dst, const void *src, size_t len);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
size_t ft_strlen(const char *str);
char *ft_strdup(const char *src);
char *ft_strcpy(char *dest, const char *src);
char *ft_strncpy(char * dst, const char * src, size_t len);
char *ft_strcat(char *str1, const char *str2);
char *ft_strncat(char *str1, const char *str2, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
char *ft_strstr(const char *haystack, const char *needle);
char *ft_strnstr(const char *big, const char *little, size_t length);
int	ft_strcmp(const char *s1, const char *s2);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

char *ft_strnew(size_t size);
void *ft_memalloc(size_t size);
char *ft_strsub(char const *s, unsigned int start, size_t len);
char **ft_strsplit(char const *s, char c);
char *ft_strtrim(char const *s);

void ft_putchar(char c);
void ft_putchar_fd(char c, int fd);
void ft_putstr(char const *c);
void ft_putstr_fd(char const *s, int fd);
void ft_putnbr(int nbr);
void ft_putnbr_fd(int nbr, int fd);
void ft_putendl(char const *s);
void ft_putendl_fd(char const *s, int fd);

char *ft_strjoin(char const *s1, char const *s2);
int ft_strequ(char const *s1, char const *s2);
int ft_strnequ(char const *s1, char const *s2, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strmap(char const *s, char (*f)(char));
void ft_striteri(char *s, void (*f)(unsigned int, char *));



#endif
