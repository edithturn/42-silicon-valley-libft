/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 22:26:51 by edith             #+#    #+#             */
/*   Updated: 2020/04/22 21:41:33 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char *s = "Hello World";
	int n = 2;
	int d = 7;
	char *p;

	p = ft_substr(s, n, d);
	printf("%s", p);
	return (0);
}
