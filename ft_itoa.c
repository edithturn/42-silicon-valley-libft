/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:13:31 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/23 14:06:40 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char				*ptr;
	unsigned		int	num;
	size_t				lenght;

	if (n == 0)
	{
		ptr = "0";
		return (ptr);
	}
	num = (n < 0) ? -n : n;
	lenght = (n < 0) ? 1 : 0;
	while (num > 0)
	{
		num = num / 10;
		lenght++;
	}
	if (!(ptr = ft_strnew(lenght)))
		return (NULL);
	num = (n < 0) ? -n : n;
	while (num > 0)
	{
		lenght = lenght - 1;
		ptr[lenght] = (num % 10) + '0';
		num = num / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
