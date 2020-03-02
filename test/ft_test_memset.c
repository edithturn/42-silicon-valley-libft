/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:26:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 11:12:46 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str1[11] = "HelloWorld";
	char str2[11] = "HelloWorld";
	char c = 'A';
	char b1[0xF00];

	/*printf("\nBefore memset str1 str2: %s\n %s\n", str1, str2);*/
	memset(str1, c, 18*sizeof(char));
	ft_memset(str2, c, 18*sizeof(char));
	printf("memset: %s\n", str2);
	printf("After memset(): %s\n", str1);

	return 0;

}
