/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:39:31 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:39:33 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_striter_f(char *s)
{
	/*printf("%s", s);*/
	write(1, s, 1);
}

int main(void)
{
	char *c = "asdf";
	void (*f)(char *) = &test_striter_f;
	ft_striter(c, f);
	return (0);
}
