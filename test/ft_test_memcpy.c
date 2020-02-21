/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:02:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/20 12:26:13 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_libft.h"
int main()
{
	char csrc[] = "42 Silicon Valley";
	char cdest[100];

	ft_memcpy(cdest, csrc, strlen(csrc) + 1);
	printf("Copied string is %s", cdest);

	return 0;
}
