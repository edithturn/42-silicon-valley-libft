/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space_character.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 16:54:28 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 14:29:56 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_space_character(char s, char const *set)
{
	char const	*ptr;

	ptr = set;
	while (*ptr)
	{
		if (*ptr == s)
			return (1);
		ptr++;
	}
	ptr = set;
	return (0);	
}
