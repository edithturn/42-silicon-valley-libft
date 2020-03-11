/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 21:56:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 22:12:26 by epuclla          ###   ########.fr       */
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
