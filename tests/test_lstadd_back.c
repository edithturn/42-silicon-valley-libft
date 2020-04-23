/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:35:05 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:35:07 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	int count;
	t_list *next;
	t_list *head;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	t_list *p = ft_lstnew(ft_strdup("pareja"));

	ft_lstadd_front(&l, n);
	ft_lstadd_back(&n, p);
	head = l;
	count = 0;
	
	while(head)
	{
		count = count + 1;
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	printf("%d", count);
	return (0);
}