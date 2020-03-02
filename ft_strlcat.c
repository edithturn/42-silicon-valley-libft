/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcal.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:59:52 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/01 19:07:17 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	
	size_t i;
	size_t j;
	size_t n;

	j = 0;
	i = ft_strlen(dest);
	n = ft_strlen(src);

	while (j < size && src[j] != '\0' && i + 1 < size)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	if(size <= i)
		return (n + size);
	return (i + j);
}
