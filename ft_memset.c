/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:03:44 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/19 20:52:14 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void *ft_memset(void *src, int x, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char*)src;
	while (n-- > 0)
		*(ptr++) = (unsigned char)x;
	return (src);		
}
