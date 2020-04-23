/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 19:01:00 by edith             #+#    #+#             */
/*   Updated: 2020/04/22 21:35:15 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

int main(void)
{
	int count;
	t_list *next;
	t_list *head;

	t_list *l = ft_lstnew(ft_strdup("puclla"));
	t_list *n = ft_lstnew(ft_strdup("edith"));
	
	ft_lstadd_front(&l, n);
	head = n;
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