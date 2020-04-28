/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 17:36:53 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/27 23:54:33 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char dst[] = "Destinaton";
	char str[] = "Source";
	int r;
	/*int f;*/

	/*f = strlcat(dst, str, 3);*/
	r = ft_strlcat(dst, str, 0);
	/*printf("%d\n", f);*/
    printf("%d", r);
	
	return (0);
}
