/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 10:53:52 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/05 22:43:19 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	unsigned char		*csrc;
	unsigned char		*cdst;

	i = 0;
	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	
	if (cdst == NULL && csrc == NULL)
        return NULL;
	
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
