/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:25:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 13:04:37 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcat() function appends the src string
**to the dest string, over writing the terminating null
**byte ('\0') at the end of dest,  and  then
**adds  a  terminating  null  byte.
*/

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	unsigned char i;
	unsigned char j;

	i = 0;
	while (str1[i])
		i++;
	j = 0;
	while (str2[j] && n > 0)
	{
		str1[i] = str2[j];
		j++;
		i++;
		n--;
	}
	str1[i] = '\0';
	return (str1);
}
