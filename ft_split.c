/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:25:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/23 02:10:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countletters(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (str[count] != c && str[count])
		count++;
	return (count);
}

static	size_t	ft_countwords(char	const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			if (*(str + 1) == c || *(str + 1) == '\0')
				count++;
		}
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;

	i = 0;
	if (!s || !c)
		return (NULL);
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	while (i < ft_countwords(s, c))
	{
		while (*s == c && *s)
			s++;
		if (!(ptr[i] = (char *)malloc(sizeof(char) \
			* (ft_countletters(s, c) + 1))))
			return (NULL);
		j = 0;
		while (*s++ != c && *s)
			ptr[i][j++] = *s;
		ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
