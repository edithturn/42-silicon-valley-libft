/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:30:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 09:21:04 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *find)
{
	unsigned int n;
	unsigned int i;

	if (find == '\0')
		return ((char*)src);
	n = 0;
	i = 0;
	while (src[n] != '\0')
	{
		if (src[n] == find[0])
		{
			i = 1;
			while (find[i] != '\0' && src[n + i] == find[i])
				i++;
			if (find[i] == '\0')
				return ((char*)find);
		}
		n++;
	}
	return (0);
}
