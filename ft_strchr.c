/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:26:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 18:12:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char		r;
	const unsigned char *ptr;
	int 	i;

	i = 0;
	r = (unsigned char)c;
	ptr = (const unsigned char *)s;
	while (s[i] != r)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((void *)ptr);
}
