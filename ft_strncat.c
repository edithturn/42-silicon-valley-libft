/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:25:09 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/22 13:58:01 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *str1, const char *str2, size_t n)
{
	unsigned char i;
	unsigned char j;

	i = 0;
	while (str1[i])
		i++;
	j = 0;
	while (str2[j] && n > 0)
	{
		str1[i] = str2[j];
		j++;
		i++;
		n--;
	}
	str1[i] = '\0';
	return (str1);
}
