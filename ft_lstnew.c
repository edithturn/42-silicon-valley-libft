/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 22:53:26 by edith             #+#    #+#             */
/*   Updated: 2020/04/17 10:37:29 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates (with malloc(3)) and returns a new
element. The variable ’content’ is initialized
with the value of the parameter ’content’. The
variable ’next’ is initialized to NULL.
*/

t_list	*ft_lstnew(void *content)
{
    t_list *my_list = NULL;

    my_list = (t_list *) malloc(sizeof(t_list) );
    if (my_list == NULL)
        return NULL;
    my_list->content = content;
	my_list->next = NULL;
    return (my_list);
}

