/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/23 21:17:00 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/23 22:42:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void del(void *cont)
{
    if (cont)
    {  
        free(cont);
        cont = NULL;
     }
}
char *add(void *cont)
{
	char *ptr;

	ptr = NULL;
     if (cont)
    {  
		char *t;
		t = "TE";
		ptr = ft_strcat(cont, t);
     }
	 return (ptr);
}
int main(void)
{
	t_list *next;
	t_list *head;
	t_list *l = ft_lstnew(ft_strdup("50"));
	t_list *n = ft_lstnew(ft_strdup("40"));
	ft_lstadd_front(&l, n);
	head = n;
	ft_lstmap(head, (void *)add, del);
	while(head)
	{
		printf("%s", (char *) (head->content));
		next = head->next;
		head = next;
	}	
	return (0);
}