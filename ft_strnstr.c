/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:16:58 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/25 16:24:11 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *src, const char *find, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	
    while ((src[i] != '\0') && (i < n))
    {
        if (src[i] == find[0])
        {
			j = 1;
            while (((find[j] != '\0') && (src[i + j] == find[j]) && ((j + i) < n)))
				j++;
			if (find[j] == '\0')
				return ((char*)&src[i]);
		}
		i++;
	}
	return 0;
	}
