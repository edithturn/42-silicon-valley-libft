/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_ft_strncpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:06:05 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 09:10:43 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char *s1 = "MZIRIBMZIRIBMZP";
	char *s2 = "MZIRIBMZP";
	char *i1 = strstr(s1, s2);
	char *i2 = ft_strstr(s1, s2);
	
	/*Works
	printf("%s\n", ft_strstr("asdf qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty qwerty", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "qwerty1"));
	printf("%s\n", ft_strstr("", "wer"));
	printf("%s\n", ft_strstr("asdf qwerty", "zxcv"));
	printf("%s\n", ft_strstr("asdf qwerty", ""));
	*/

	return 0;
}
