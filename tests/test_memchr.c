/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:42:26 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:36:38 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(){
	const char str[] = "Hola Mundo";
	const char ch = 'a';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);

}
