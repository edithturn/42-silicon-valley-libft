/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:25:56 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 17:47:50 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split(char const *s, char c)
{
	char	**ptr;
	char	*final;
	size_t	i;
	size_t	j;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(ptr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1))))
		return (NULL);
	
	i = -1;
	j = 0;
	while (s[j])
	{
		while ((*s == c) && *s)
			s++;
		if (s[j])
		{
			if (!(final = ft_strchr(s, c)))
			{
				i++;
				ptr[i] = ft_substr(s, 0, ft_strlen(s));
			}
			else
			{
				i++;
				ptr[i] = ft_substr(s, 0, final - s);
			}
		}
		while ((*s != c) && *s)
			++s;
		j++;
	}
	return (ptr);
}
