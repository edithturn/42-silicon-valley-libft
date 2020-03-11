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

char * ft_itoa(int n)
{
	char			*ptr; ret
	size_t			len;
	int				sign;
	unsigned int	num; nb

	sign = (n < 0) ? 1 : 0;
	num = ft_abs(n);
	len = ft_intlen(nb) + sign;
	ret = (char *)malloc(sizeof(char) * len + 1);
	if (ret == NULL)
		return (NULL);
	ret[len] = '\0';
	while (len-- > (unsigned int)sign)
	{
		ret[len] = nb % 10 + '0';
		nb /= 10;
	}
	if (sign == 1)
		ret[len] = '-';
	return (ret);
}
