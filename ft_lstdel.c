/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edith <edith@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 14:12:49 by edith             #+#    #+#             */
/*   Updated: 2020/04/21 14:12:51 by edith            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    t_list *ptr;
    t_list *tmp;

    ptr = *alst;
    while(ptr)
    {
        tmp = ptr;
        ft_lstdelone(&ptr, del);
        ptr = tmp->next;
    }
}