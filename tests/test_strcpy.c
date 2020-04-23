/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 17:45:06 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:39:03 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char str1[10]= "awesome";
	char str2[10];
	char str3[10];
	
	ft_strcpy(str2, str1);
	ft_strcpy(str3, "well");
	printf("%s", str2);
	printf("%s", "\n");
	printf("%s", str3);
	return (0);
}
