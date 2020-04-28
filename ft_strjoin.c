/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:05 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 12:02:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3)) and returns a new
**string, which is the result of the concatenation
**of 's1' and 's2'.
**Parameters:
**#1. The prefix string.
**#2. The suffix string.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *ptr;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ptr = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ptr == NULL)
		return (NULL);
	ft_strcpy(ptr, s1);
	ft_strcat(ptr, s2);
	return (ptr);
}
