/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:40:19 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:40:20 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str = 'c';
	int n = 1;
    char *r;

	r = ft_strmapi(str, ft_strdup(str));
	printf("%s\n", r);
	return (0);
}
