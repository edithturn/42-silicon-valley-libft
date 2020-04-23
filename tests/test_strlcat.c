/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:36:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:40:00 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char dst[] = "Hello";
	char str[] = "Mundo";
	int r;
	int f;

	f = strlcat(dst, str, 3);
	r = ft_strlcat(dst, str, 3);
	printf("%d\n", f);
    printf("%d", r);
	
	return (0);
}
