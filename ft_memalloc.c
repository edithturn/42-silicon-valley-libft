/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:23:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:23:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memalloc(size_t size)
{
	char *ptr;
	
	ptr = (char *)malloc(sizeof(char) * size);

	if(ptr == NULL)
		return NULL;
	ft_bzero(ptr, size);
	return (ptr);
}
