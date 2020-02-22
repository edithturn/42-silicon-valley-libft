/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:15:47 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/21 16:59:56 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char *ustr;
	unsigned char uc;

	ustr = (unsigned char *)str;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ustr == uc)
			return (ustr);
		ustr++;
	}
	return (NULL);
}
