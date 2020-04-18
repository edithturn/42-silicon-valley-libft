/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 22:55:29 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 10:37:10 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
Adds the element ’new’ at the beginning of the list.
#1. The address of a pointer to the first link of a list.
#2. The address of a pointer to the element to be added to the list.
*/
void			ft_lstadd_front(t_list **lst, t_list *new)
{
    t_list **heap = lst;
	t_list *new_node = new;

    if(*heap)
		new_node->next = *heap;
		*heap = new_node;	
}