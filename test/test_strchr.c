/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 21:47:19 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/22 21:59:29 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char *str1 = "Hola";
	char str2 = 'o';
	
	printf("%s", ft_strchr(str1, str2));

	return (0);
}