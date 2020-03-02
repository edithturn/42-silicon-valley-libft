/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 11:46:01 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 13:32:38 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst < src)
		return (ft_memcpy(dst, src, n));
	else
		while (n > 0)
		{
			((char *)dst)[n] = ((char *)src)[n];
			n--;
		}
	return (dst);
}
