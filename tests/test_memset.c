/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:26:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 08:29:41 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/*
**The  memset()  function  fills  the  first  n  bytes of the memory area
**pointed to by s with the constant byte c.
*/
int main()
{
	char str1[11] = "HelloWorld";
	char str2[11] = "HelloWorld";
	char c = 'A';

	memset(str1, c, 18*sizeof(char));
	ft_memset(str2, c, 18*sizeof(char));
	printf("    memset: %s\n", str2);
	printf("ft_memset(): %s\n", str1);

	return 0;

}
