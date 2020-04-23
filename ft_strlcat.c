/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:11 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/23 01:13:51 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	len;

	len = 0;
	srclen = ft_strlen((char *)src);
	while (*dest && n > 0)
	{
		dest++;
		len++;
		n--;
	}
	while (*src && n-- > 1)
		*dest++ = *src++;
	if (n == 1 || *src == 0)
		*dest = '\0';
	return (srclen + len);
}
