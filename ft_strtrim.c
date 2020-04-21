/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:54:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/21 14:11:30 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
Parameters:
#1. The string to be trimmed.
#2. The reference set of characters to trim.
*/

int ft_space(char  const *s, char const *set)
{
	return (*s == *set );
}
char 	*ft_strtrim(char const *s1, char const *set)
{
	char *ptr;
	int len;
	int i;

	if(*s1 == '\0' && *set == '\0')
		return (NULL);
	while(*s1 && ft_space(s1, set))
		s1++;
	if (ft_strlen(s1) == 0)
		len = 0;
	else
		len =  ft_strlen(s1) - 1;
	if(len > 0)
	{
		while(s1[len] == *set || s1[len] == *set  || s1[len] == *set)
			len--;
		len++;
	}
	if(!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	i = 0;
	ptr[len] = '\0';
	while(len)
	{
		ptr[i] = *s1;
		i++;
		s1++;
		len--;
	}	
	return (ptr);		
}