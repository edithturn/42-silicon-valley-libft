/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:34:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 15:38:28 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Allocates (with malloc(3)) and returns a substring
**from the string ’s’.
**The substring begins at index ’start’ and is of
**maximum size ’len’.
**Parameters:
**#1. The string from which to create the substring.
**#2. The start index of the substring in the string ’s’.
**#3. The maximum length of the substring.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (s == '\0')
		return (NULL);
	ptr = ft_strnew(len);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
