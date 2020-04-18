/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 00:33:04 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/16 22:41:17 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_countletters(char const *str, char c)
{
	size_t count;
	count = 0;

	while(str[count] != c  && str[count])
		count++;
	return (count);
}
static size_t ft_countwords(char const *str, char c)
{
	size_t count;
	
	count = 0;
	while(*str)
	{
		if (*str != c)
		{
			if(*(str + 1) == c || *(str + 1) == '\0')
				count++;
		}
		str++;
	}
	return (count);
}
char  **ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;
	size_t	j;
	size_t	count_words;
	size_t count_letters;

	i = 0;	
	if (!s || !c)
		return (NULL);
	count_words = ft_countwords(s, c);
	if (!(ptr = (char **)malloc(sizeof(char *) * (count_words + 1))))
		return (NULL);
	while (i < count_words)
	{
		while (*s == c && *s)
			s++;
		count_letters = ft_countletters(s, c);
		if(!(ptr[i] = (char *)malloc(sizeof(char) * (count_letters + 1))))
			return (NULL);
		j = 0;
		while (*s != c && *s)
		{
			ptr[i][j] = *s;
			j++;
			s++;
		}
		ptr[i][j] = '\0';
		i++;
	}
	ptr[i] = 0;
	return (ptr);	
}