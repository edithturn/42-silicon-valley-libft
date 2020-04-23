/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:35:22 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:35:23 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

int main(void)
{
	t_list *next;
	t_list *head;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	
	ft_lstadd_front(&l, n);
	head = n;

	/*void			ft_lstdelone(t_list *lst, void (*del)(void *))*/
	ft_lstdelone(head, ft_strdel());

	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}