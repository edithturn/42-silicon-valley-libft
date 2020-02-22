/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 09:57:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/22 13:52:25 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/*Libraries to test*/
#include <stdio.h>

void *ft_memset(void *src, int x, size_t n);
char *ft_strncpy(char *dst, char *src, unsigned int len);
void *ft_bzero(void *str, size_t n);
void *ft_memcpy(void *dest, void *src, size_t n);
void *ft_memmove(void*dst, const void *src, size_t len);
void *ft_memchr(const void *str, int c, size_t n);
int	 ft_strlen(char *str);
char *ft_strdup(char *src);
char *ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *str1, const char *str2);
char *ft_strncat(char *str1, const char *str2, size_t n);

char *ft_strstr(const char *str, const char *to_find);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

#endif
