/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:00:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:34:50 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	/*int v1 = 'k';*/
	/*int v1 = '8';*/
	/*int v1 = '\t';*/
	int v1 = ' ';

	if (ft_isprint(v1))
	{
		printf("%d is printable", v1);
	}
	else
	{
		printf("%d is not printable", v1 );
	}

	return (0);
}

