/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/26 22:43:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/27 00:37:52 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**The  calloc()  function allocates memory for an array of nmemb elements
**of size bytes each and returns a pointer to the allocated memory.   The
**memory  is  set  to zero.  If nmemb or size is 0, then calloc() returns
**either NULL, or a unique pointer value that can later  be  successfully
**passed to free().
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	return (ft_memalloc(nmemb * size));
}
