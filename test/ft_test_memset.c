/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:26:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/27 21:37:28 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str[] = "HelloWorld";
	printf("\nBefore memset(): %s\n", str);
	ft_memset(str, '.', 2*sizeof(char));
	printf("After memset(): %s\n", str);

	return 0;

}
