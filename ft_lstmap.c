/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:30:53 by edith             #+#    #+#             */
/*   Updated: 2020/04/24 16:07:57 by epuclla          ###   ########.fr       */
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
	t_list		*current;
	t_list		*next;
	void		*new_content;

	if (lst == NULL)
		return (NULL);
	new_content = f(lst);
	new_head = ft_lstnew(new_content);
	if (new_head == NULL)
		del(new_content);
	if (new_head == NULL)
		return (NULL);
	current = new_head;
	lst = lst->next;
	while (lst != NULL)
	{
		next = ft_lstnew(f(lst));
		current->next = next;
		current = current->next;
		lst = lst->next;
	}
	current->next = NULL;
	return (new_head);
}
