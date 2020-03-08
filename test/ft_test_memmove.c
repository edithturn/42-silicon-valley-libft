/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memmove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 12:15:59 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/28 22:23:18 by epuclla          ###   ########.fr       */
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
