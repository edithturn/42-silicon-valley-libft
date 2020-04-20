/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:30:53 by edith             #+#    #+#             */
/*   Updated: 2020/04/19 19:16:20 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the list ’lst’ and applies the function ’f’ to the content 
of each element. Creates a new list resulting of the successive 
applications of the function ’f’. The ’del’ function is used to
delete the content of an element if needed.
Parameters:
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
#3. The adress of the function used to delete the content 
of an element if needed.
*/

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_element;
	t_list	*current;

	if (!lst || !f)
		return (NULL);

	current = ft_lstnew(f(lst->content));	
	if (!(new_element = current))
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	lst = lst->next;
	while (lst != NULL)
	{
		if(!(new_element = current))
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new_element, del);
			break;
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, new_element);
	}
	return (new_list);
}
