/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:06:05 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:40:47 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char test1[] = "asdf";

	printf("%s\n", ft_strncpy(test1, "uiop", 5));
	printf("%s\n", ft_strncpy(test1, "qwerty", 4));
	printf("%s\n", ft_strncpy(test1, "z", 1));

	return 0;
}
