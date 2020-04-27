/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:48:15 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 16:05:30 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Applies the function ’f’ to each character of the
**string ’s’ to create a new string (with malloc(3))
**resulting from successive applications of ’f’.
**#1. The string on which to iterate.
**#2. The function to apply to each character.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	int			i;
	char		*ptr;

	if (s == '\0')
		return (NULL);
	ptr = ft_strnew(ft_strlen(s));
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
