/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 13:38:22 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:40:36 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str1[10] = "42";
	char str2[11] = "Awesome";
	char *result;

	result = ft_strncat(str1, str2, 2*sizeof(char));
	printf("%s", result);


return (0);
}
