/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/21 17:58:15 by edith             #+#    #+#             */
/*   Updated: 2020/04/22 21:35:48 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <unistd.h>

int main()
{
	char *str = "ss";
	t_list *head;

	head = ft_lstnew(str);
    printf("%s", (char *) (head->content));
	return (0);
}

