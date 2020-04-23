/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:35 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:28:36 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	dest = (char*)malloc(sizeof(*src) * (i + 1));
	if (dest == NULL)
		return (NULL);
		
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
