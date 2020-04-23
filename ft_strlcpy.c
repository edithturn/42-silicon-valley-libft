/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:29:18 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:29:20 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if(!dst && !src)
		return (0);
	if (size == 0)
		return (ft_strlen(src));
	if(ft_strlen(src) < size)
		ft_strcpy(dst, src);
	else
		ft_strncpy(dst, src, size - 1);	
	dst[size - 1] = '\0';
	return (ft_strlen(src));
}
