/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:59:52 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 14:18:37 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t h;

	i = 0;
	h = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[h])
		h++;
	if (size <= i)
		h += size;
	else
		h += i;
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (h);
}
