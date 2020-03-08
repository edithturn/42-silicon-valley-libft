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
	size_t		i;
	unsigned char		*usrc;
	unsigned char		*udst;

	i = 0;
	usrc = (unsigned char *)src;
	udst = (unsigned char *)dst;

	if (udst == NULL && usrc == NULL)
        return NULL;

	if (usrc > udst)
	{
		while (i < n)
		{
			udst[i] = usrc[i];
			i++;
		}
		return (dst);
	}
	else
	{
		while ( n > 0)
		{
			n--;
			udst[n] = usrc[n];
		}
		return(dst);

	}

}
