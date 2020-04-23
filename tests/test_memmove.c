/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:15:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:37:02 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main ()
{
	char str[] = "42Sr";
	char dst[] = "Mundo";
	
	printf("%lu\n", sizeof(str));
	ft_memmove(dst, str, sizeof(str));
	printf("%s", dst);
	return (0);
}
