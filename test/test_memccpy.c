/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_ft_memccpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:33:27 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 14:07:37 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char dest[80];
	char *string = "42 Silicon Valley is Awesome";
	char *new;

	new = ft_memccpy(dest, string, 'S', 4);
	*new = '\0';
	printf("%s\n" , dest);
	return 0;

}
