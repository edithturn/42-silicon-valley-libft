/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:36:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 16:24:58 by epuclla          ###   ########.fr       */
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
