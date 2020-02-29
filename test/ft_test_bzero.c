/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_bzero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 23:47:14 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/28 15:30:32 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str[12] = "Hello World";
	char *salve  = str;

	printf("\nBefore bzero(): %s\n", salve);
	ft_bzero(salve, 2*sizeof(char));
	printf("After bzero: %s\n", salve);

	return 0;
}
