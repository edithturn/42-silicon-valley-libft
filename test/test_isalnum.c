/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_isalnum.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 13:32:26 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/27 13:48:25 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	/*int j = 122;*/
	char c = 'u';
	int n;
	int b;

	n = ft_isalnum(c);
	b = isalnum(c);

	printf("%s  %c %d", "ft_isalnum", c, n);
	printf("%c", '\n');
	printf("%s %c %d\n", "isalnum", c, b);
	
	return (0);
}
