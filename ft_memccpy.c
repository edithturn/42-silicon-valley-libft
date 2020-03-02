/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 13:23:08 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 14:01:39 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*udst;
	unsigned char	*usrc;
	unsigned int	k;

	i = 0;
	udst = (unsigned char *)dst;
	usrc = (unsigned char *)src;
	k = (unsigned int)c;
	while (i < n)
	{
		udst[i] = usrc[i];
		if (udst[i] == k)
			return ((void*)(dst + i + 1));
		i++;
	}
	return (NULL);
}
