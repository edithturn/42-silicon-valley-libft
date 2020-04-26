/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:25:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 18:35:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c)
{
char				**new;
	unsigned int		i;
	char				*end;

	if (!s ||
	(!(new = (char **)ft_memalloc(sizeof(char *) * (ft_countwords(s, c) + 1)))))
		return (NULL);
	i = -1;
	while (*s)
	{
		while ((*s == c) && *s)
			++s;
		if (*s)
		{
			if (!(end = ft_strchr(s, c)))
				new[++i] = ft_substr(s, 0, ft_strlen(s));
			else
				new[++i] = ft_substr(s, 0, end - s);
		}
		while ((*s != c) && *s)
			++s;
	}
	return (new);
}
