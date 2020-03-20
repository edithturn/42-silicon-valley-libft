/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:45:52 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 23:53:39 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;

	if (s1 == '\0' || s2 == '\0')
		return NULL;
	ptr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) - 1);
	if (ptr == NULL)
		return NULL;
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	return(ptr);
}
