/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/28 22:37:46 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 13:32:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*us1;
	unsigned char	*us2;

	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	i = 0;
	if (us1 == us2 || n == 0)
		return (0);
	while (n)
	{
		if (us1[i] != us2[i])
			return (us1[i] - us2[i]);
		i++;
		n--;
	}
	return (0);
}
