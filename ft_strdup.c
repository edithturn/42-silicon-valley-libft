/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:19:33 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/19 10:25:53 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
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
	{
		return (NULL);
	}
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
