/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:36:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:36:31 by epuclla          ###   ########.fr       */
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
