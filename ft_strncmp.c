/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:10:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 11:52:04 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcmp()  function compares the two strings s1 and s2.  It returns
**an integer less than, equal to, or greater than zero if  s1  is  found,
**respectively, to be less than, to match, or be greater than s2
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0)
		return (0);
	while ((*s1++ && *s2++ && (n > 0)))
	{
		if (*s1 != *s2)
			break;	
		n--;
	}
	return ((unsigned char*)s1 - (unsigned char*)s2);
}
