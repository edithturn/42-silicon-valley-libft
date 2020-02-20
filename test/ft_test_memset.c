/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memset.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 19:26:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/19 21:14:09 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_libft.h"

int main()
{
	char str[16] = "Learn C at 42SV";
	printf("\nBefore memset(): %s\n", str);

	ft_memset(str + 3, '.', 8*sizeof(char));
	printf("After memset(): %s\n", str);

	return 0;

}
