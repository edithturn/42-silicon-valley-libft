/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:25:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/29 15:02:54 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_countwords(char const *str, char c)
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

static	void	*ft_memalloc(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(sizeof(char) * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}

char			**ft_split(char const *s, char c)
{
	char				**ptr;
	unsigned int		i;
	char				*final;

	if (!s ||
	(!(ptr = (char **)ft_memalloc(sizeof(char *) * (ft_countwords(s, c) + 1)))))
		return (NULL);
	i = -1;
	while (*s)
	{
		while ((*s == c) && *s)
			++s;
		if (*s)
		{
			if (!(final = ft_strchr(s, c)))
				ptr[++i] = ft_substr(s, 0, ft_strlen(s));
			else
				ptr[++i] = ft_substr(s, 0, final - s);
		}
		while ((*s != c) && *s)
			s++;
	}
	return (ptr);
}
