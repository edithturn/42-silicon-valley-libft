/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:47:14 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/20 00:11:52 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_libft.h"

int main()
{
	char str[16] = "Learn C at 42SV";
	printf("\nBefore bzero(): %s\n", str);
	ft_bzero(str, 2*sizeof(char));
	printf("After bzero: %s\n", str);

	return 0;
}
