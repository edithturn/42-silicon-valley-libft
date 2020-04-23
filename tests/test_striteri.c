/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:39:39 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:39:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void test_striteri_f(unsigned int index, char *s)
{
	printf("%d", index);	
	write(1, s, 1);
}

int main(void)
{
	char *c = "asdf";
	void (*f)(unsigned int, char *) = &test_striteri_f;
	ft_striteri(c, f);
	return (0);
}