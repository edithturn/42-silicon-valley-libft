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

char	*ft_strstr(const char *str, const char *to_find)
{
	unsigned int n;
	unsigned int i;

	if (!*to_find)
		return ((char *)str);
	n = 0;
	while (str[n])
	{
		if (str[n] == to_find[0])
		{
			i = 1;
			while (to_find[i] && str[n + i] == to_find[i])
			{
				i++;
				if (!to_find[i])
					return ((char *)&str[n]);
			}
		}
			n++;
	}
	return (0);
}