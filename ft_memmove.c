/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:46:01 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/21 13:05:08 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t					i;
	unsigned char			*udst;
	const unsigned char		*usrc;

	udst = (unsigned char*)dst;
	usrc = (unsigned char*)src;
	i = 0;
	if (udst < usrc)
		while (++i <= len)
			udst[len - i] = usrc[len - i];
	else
		while (len-- > 0)
			*(udst++) = *(usrc++);
	return (dst);
}
