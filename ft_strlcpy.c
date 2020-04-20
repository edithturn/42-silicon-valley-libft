/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:06:43 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/19 18:15:50 by edith            ###   ########.fr       */
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
