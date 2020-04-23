/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 11:17:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:38:49 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str1[5] = "42";
	char str2[] = "Awe";
	char *result;

	result = ft_strcat(str1, str2);
	printf("%s", result);
	return (0);
} 
