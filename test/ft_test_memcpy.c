/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_memcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 11:02:29 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/05 19:12:45 by epuclla          ###   ########.fr       */
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
