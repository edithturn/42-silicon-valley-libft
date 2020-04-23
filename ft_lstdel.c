/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:14:33 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 23:50:45 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter an element and frees the
** memory of the element’s content using the function
** ’del’ given as a parameter and free the element.
** The memory of ’next’ must not be freed.
** Parameters:
** #1. The element to free.
** #2. The address of the function used to delete the content.
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *ptr;
	t_list *tmp;

	ptr = *alst;
	while (ptr)
	{
		tmp = ptr;
		ft_lstdelone(&ptr, del);
		ptr = tmp->next;
	}
}
