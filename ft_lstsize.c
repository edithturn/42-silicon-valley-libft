/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/17 10:11:09 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 10:37:43 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/**
Counts the number of elements in a list.
Parameters: #1. The beginning of the list.
Return value: Length of the list.
*/

int				ft_lstsize(t_list *lst)
{
	t_list *next;
	int count;
	count = 0;
	while(lst)
	{
		next = lst->next;
		lst = next;
		count = count + 1;		
	}
	return (count);

}