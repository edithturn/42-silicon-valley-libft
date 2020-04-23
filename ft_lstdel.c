/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:14:33 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 20:14:35 by epuclla          ###   ########.fr       */
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