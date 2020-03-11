/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 15:29:03 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/25 16:07:20 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	/*char  buf[20];*/
	/*char	buf[] = "hola";*/
	/*char a[4];*/

	/*ft_strnstr(buf, "deux", 5) == NULL*/

	const char *largestring = "Foo";
	const char *smallstring = "Bar";

	char *r = ft_strnstr(largestring, smallstring, 2);
	char *c = strnstr(largestring, smallstring, 2);
	printf("%s", r);
	printf("%c", '\n');
	printf("%s", c);
	return (0);
}
