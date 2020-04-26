/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:25:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 12:59:31 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c)
{
	char				**ptr;
	unsigned int		i;
	char				*final;
	char 			*sbt;

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
			{
				sbt = ft_substr(s, 0, ft_strlen(s));
				ptr[i++] = sbt;
			}
			else
				ptr[++i] = ft_substr(s, 0, final - s);
		}
		while ((*s != c) && *s)
			++s;
	}
	return (ptr);
}
