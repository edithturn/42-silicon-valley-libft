/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:30:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/25 13:14:19 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int n;
	unsigned int i;

	if (!*to_find)
		return ((char*)str);
	n = 0;
	while (str[n] != '\0')
	{
		if (str[n] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[n + i] == to_find[i])
				i++;
			if (to_find[i] == '\0')
				return ((char*)to_find);
		}
		n++;
	}
	return (0);
}
