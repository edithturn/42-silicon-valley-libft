/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 10:29:09 by edith             #+#    #+#             */
/*   Updated: 2020/04/21 17:31:40 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
Returns the last element of the list.
Parameters: #1. The beginning of the list.
*/

t_list			*ft_lstlast(t_list *lst)
{
	t_list *next;

	while(lst->next != NULL)
		lst = lst->next;
	return (lst);
}