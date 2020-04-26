/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:26:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 16:13:04 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  strcmp()  function compares the two strings s1 and s2.  It returns
**an integer less than, equal to, or greater than zero if  s1  is  found,
**respectively, to be less than, to match, or be greater than s2.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	int						i;
	unsigned		char	*us1;
	unsigned		char	*us2;

	i = 0;
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	while (us1[i] == us2[i] && us1[i] != '\0' && us2[i] != '\0')
		i++;
	return (us1[i] - us2[i]);
}
