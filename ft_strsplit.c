/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 00:33:04 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/11 00:55:53 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char ** ft_strsplit(char const *s, char c)
{
	char	**a;
	size_t	iw;
	size_t	word_index;
	size_t	i;
	size_t	start;

	if (s == NULL)
		return (NULL);
	if (!(a = (char **)ft_memalloc((ft_countwords(s, c) + 1) * sizeof(char *))))
		return (NULL);
	word_index = 0;
	iw = 0;
	i = -1;
	start = 0;
	while (s[i])
	{
		if (iw && s[i] == c)
			a[word_index++] = ft_strsub(s, start, i - start);
		if (!iw && s[i] != c)
			start = i;
		iw = (s[i] == c) ? 0 : 1;
		i++;
	}
	if (iw)
		a[word_index] = ft_strsub(s, start, i - start);
	return (a);

}
