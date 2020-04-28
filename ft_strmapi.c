/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:10:38 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 12:03:29 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Applies the function 'f' to each character of the
**string 's' to create a new string (with malloc(3))
**resulting from successive applications of 'f'.
**Parameters:
**#1. The string on which to iterate.
**#2. The function to apply to each character.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int			i;
	char		*ptr;

	if (s == NULL || f == NULL)
		return (NULL);
	ptr = ft_strnew(ft_strlen(s));
	if (ptr == '\0')
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
