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

char	*ft_strnstr(const char *big, const char *little, size_t length)
{
	int i;

	if (*little == '\0')
		return ((char *)big);
	while (big && length-- && *big)
	{
		if (*big++ == *little)
		{
			big--;
			i = 0;
			while (big[i] == little[i] || !little[i])
			{
				if (!little[i++])
					return ((char *)big);
			}
			big++;
		}
	}
	return (0);
}
