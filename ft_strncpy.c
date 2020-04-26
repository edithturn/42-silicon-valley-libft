/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:53:34 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 15:46:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcpy()  function  copies the string pointed to by src, including
**the terminating null byte ('\0'), to the buffer  pointed  to  by  dest.
**The  strings  may  not overlap, and the destination string dest must be
**large enough to receive the copy.
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while ((i < len) && src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
