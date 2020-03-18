/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/11 01:00:07 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/11 01:04:41 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_itoa(int n)
{
	char				*ptr; 
	size_t				lenght;
	unsigned int	num;

	if (n < 0)
	{
		num = -n;
		lenght = 1;
	}
	else
	{
		num = n;
		lenght = 0;
	}
	while (num > 0)
	{
		num = num / 10;
		lenght++;
	}
	if (!(ptr = ft_strnew(lenght)))
		return (NULL);
	if (n < 0)
		num = -n;
	else
		num = n;
	while(num > 0)
	{
		lenght = lenght - 1;
		ptr[lenght] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}