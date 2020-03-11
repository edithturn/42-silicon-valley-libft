/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 00:36:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/11 00:52:23 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	size_t	count;
	int		i;

	i = 0;
	count = 0;
	while (*str)
	{
		if (!i && *str != c)
			count++;
		i = (*str == c) ? 0 : 1;
		str++;
	}
	return (count);
}
