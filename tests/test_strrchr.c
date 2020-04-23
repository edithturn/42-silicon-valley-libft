/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 10:22:23 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:41:07 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	const char str[] = "Hola";
	const char ch = 'o';
	char *p;
	
	p = ft_strrchr(str, ch);
	printf("%c, %s", ch, p);
	return (0);
}
