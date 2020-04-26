/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:24:47 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 08:47:29 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  memset()  function  fills  the  first  n  bytes of the memory area
**pointed to by s with the constant byte c.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*ub;
	unsigned	char	crt;

	if (b == NULL)
		return (NULL);
	ub = (unsigned char *)b;
	crt = (unsigned char)c;
	while (len > 0)
	{
		*ub++ = crt;
		len--;
	}
	ub = '\0';
	return (b);
}
