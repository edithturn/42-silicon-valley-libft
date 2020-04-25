/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:30:53 by edith             #+#    #+#             */
/*   Updated: 2020/04/24 23:43:46 by epuclla          ###   ########.fr       */
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
	t_list		*new_head;
	t_list		*current_node;
	t_list		*next;


	new_head = ft_lstnew(f(lst));
	if (new_head == NULL)
	{
		del(f(lst));
		return (NULL);
	}
	current_node = new_head;
	lst = lst->next;
	while (lst)
	{
		next = ft_lstnew(f(lst));
		current_node->next = next;
		current_node = current_node->next;
		lst = lst->next;
	}
	current_node->next = NULL;
	return (new_head);
}
