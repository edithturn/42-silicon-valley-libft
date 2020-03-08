/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_isprint.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:00:49 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/27 14:25:52 by epuclla          ###   ########.fr       */
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

