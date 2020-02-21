/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_ft_memccpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:33:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/20 21:21:15 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char buffer[80];
	char *string1 = "42 Silicon Valley is Awesome";
	char *pdest;

	pdest = ft_memccpy(buffer, string1, 'S', 4);
	*pdest = '\0';
	printf("%s\n" , buffer);
	return 0;

}
