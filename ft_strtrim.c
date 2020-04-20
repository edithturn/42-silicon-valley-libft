/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:54:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/19 19:53:23 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_space(char  const *s)
{
	return (*s == '\n'  || *s == ' ' || *s == '\t');
}
char *ft_strtrim(char const *s)
{
	char *ptr;
	int len;
	int i;

	if(*s == '\0')
		return (NULL);
	while(*s && ft_space(s))
		s++;
	if (ft_strlen(s) == 0)
		len = 0;
	else
		len =  ft_strlen(s) - 1;	
	if(len > 0)
	{
		while(s[len] == '\n' || s[len] == ' '  || s[len] == '\t')
			len--;
		len++;
	}
	if(!(ptr = (char *)malloc(sizeof(*ptr) * len + 1)))
		return (NULL);
	i = 0;
	ptr[len] = '\0';
	while(len)
	{
		ptr[i] = *s;
		i++;
		s++;
		len--;
	}	
	return (ptr);		
}