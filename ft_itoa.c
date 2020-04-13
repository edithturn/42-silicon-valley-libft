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

char	*ft_itoa(int n)
{
	unsigned	int	num;
	char	*ptr;
	size_t				lenght;

	if (n == 0)
	{
		if (!(ptr = ft_strnew(1)))
			return (NULL);
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
		ptr[lenght--] = (num % 10) + '0';
		num = num / 10;
	}
	ptr[0] = (n < 0) ? '-' : ' ';
	return (ptr);
}
