/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:26:37 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 16:12:34 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcpy()  function  copies the string pointed to by src, including
**the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
**The  strings  may  not overlap, and the destination string dest must be
**large enough to receive the copy.
*/

char	*ft_strcpy(char *dest, const char *src)
{
	size_t i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
