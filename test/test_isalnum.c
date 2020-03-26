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
	int j = 122;
	int n;
	int b;

	n = ft_isalnum(j);
	b = isalnum(j);

	printf("%d %d", j, n);
	printf("%c", '\n');
	printf("%d %d", j, b);
	
	return (0);
}
