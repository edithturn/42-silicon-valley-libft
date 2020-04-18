/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 10:53:59 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 21:51:01 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes as a parameter an element and frees the memory of the element’s 
content using the function ’del’ given as a parameter and free the element.
The memory of ’next’ must not be freed.
Parameters:
#1. The element to free.
#2. The address of the function used to delete the
content.
*/

void			ft_lstdelone(t_list *lst, void (*del)(void *))
{
	t_list *next;
	
    next = lst->next;
	del(lst->content);
	free(lst);
	lst = next;
}