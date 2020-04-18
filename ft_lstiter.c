/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 22:19:42 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 22:30:13 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates the list ’lst’ and applies the function ’f’
 to the content of  each element. 
Parameters:
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
*/

void			ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *next;

	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		next = lst->next;
		lst = next;
	}
}