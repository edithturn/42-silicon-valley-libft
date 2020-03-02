/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 11:03:44 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 10:29:30 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void *ptr;

	ptr = (void *)b;
	while (len > 0)
	{
		*(unsigned char *)ptr = (unsigned char)c;
		len--;
		ptr++;
	}
	return (b);
}
