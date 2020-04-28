/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:11 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/28 12:02:26 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The strlcat() function appends the NUL-terminated string src to the end
**of dst. It will append at most size - strlen(dst) - 1 bytes,
** NUL-termi‐nating the result.
**strlcat() take the full size of the buffer (not
**just the length) and guarantee to NUL-terminate the result (as long as
**size is larger than 0 or, in the case of strlcat(), as long as there is
**at least one byte free in dst).
*/

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srclen;
	size_t	destlen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = ft_strlen(dest);
	if (n <= destlen)
		return (n + srclen);
	i = 0;
	while (src[i] != '\0' && (i + destlen + 1) < n)
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (destlen + ft_strlen(src));
}
