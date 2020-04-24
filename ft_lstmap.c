/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:30:53 by edith             #+#    #+#             */
/*   Updated: 2020/04/23 21:30:42 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates the list ’lst’ and applies the function ’f’ to the content
** of each element. Creates a new list resulting of the successive
** applications of the function ’f’. The ’del’ function is used to
** delete the content of an element if needed.
** Parameters:
** #1. The adress of a pointer to an element.
** #2. The adress of the function used to iterate on the list.
** #3. The adress of the function used to delete the content
** of an element if needed.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	t_list	*new_node;

	new_node = ft_lstnew(f(lst->content));
	while (lst)
	{
		if(!(new_node))
		{
			ft_lstclear(&node, del);
			ft_lstclear(&new_node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, new_node);
		new_node = new_node->next;
	}
	return (new_node);
}
