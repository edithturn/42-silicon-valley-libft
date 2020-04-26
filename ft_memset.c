/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:24:47 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 19:01:04 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned	char	*ub;
	unsigned	char	*uc;

	ub = (unsigned char *)b;
	uc = (unsigned char *)c;
	while (len > 0)
	{
		*ub = uc;
		len--;
		ub++;
	}
	return (b);
}
