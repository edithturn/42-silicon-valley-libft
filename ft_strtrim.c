/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:54:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 12:01:35 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates (with malloc(3)) and returns a copy of
** ’s1’ with the characters specified in ’set’ removed
** from the beginning and the end of the string.
** Parameters:
** #1. The string to be trimmed.
** #2. The reference set of characters to trim.
*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		len;
	int		i;

	if (*s1 == '\0')
		return (NULL);
	while ((*s1 && ft_space_character(s1, set)))
			s1++;
	if (ft_strlen(s1) == 0)
		len = 0;
	else
		len = ft_strlen(s1) - 1;
	while (s1[len] && ft_space_character(&s1[len], set))
			len--;
	if (!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	i = 0;
	len = len + 1;
	while (len)
	{
		ptr[i] = *s1;
		i++;
		s1++;
		len--;
	}
	ptr[i] = '\0';
	return (ptr);
}
