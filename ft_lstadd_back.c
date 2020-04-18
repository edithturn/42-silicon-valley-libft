/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 10:35:37 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 10:53:16 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Adds the element ’new’ at the end of the list.
Parameters:
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.
*/

void ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list *last;

	if(*lst)
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
	else
		*lst = new;
}
