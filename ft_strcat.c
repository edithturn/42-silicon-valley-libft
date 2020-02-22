/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:06:51 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/22 13:23:39 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *str1, const char *str2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (str1[i] != '\0')
		i++;
	j = 0;
	while (str2[j] != '\0')
	{
		str1[i] = str2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
