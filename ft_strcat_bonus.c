/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:26:04 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 12:42:24 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcat() function appends the src string to the dest string,
**over‐writing the terminating null byte ('\0') at the 
**end of dest,  and  then **adds  a  terminating  null  byte.
*/

char	*ft_strcat(char *str1, const char *str2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (str1[i] != '\0')
		i++;
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
