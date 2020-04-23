/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:02:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:36:56 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
int main()
{
	char csrc[] = "42 Silicon Valley";
	char cdest[100];

	ft_memcpy(cdest, csrc, strlen(csrc) + 1);
	printf("Copied string is %s", cdest);

	return 0;
}
