/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:07:30 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/24 00:46:13 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int		num;
	int		sign;
	char		*s;

	i = 0;
	num = 0;
	sign = 1;
	s = (char *)str;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == '\v' \
	|| s[i] == '\f' || s[i] == '\r')
		i++;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i]  == '+')
		i++;
	while (ft_isdigit(s[i]))
	{
		int INT_MAX = 2147483647;
		int INT_MIN =  -2147483648;

		if (num > INT_MAX || num < INT_MIN) { 
			if (sign == 1) 
			{
				return 0; 
				break;
			}
			else
			{
				return -1; 
				break;
			}
        } 
		num = ((num * 10) + (s[i] - '0'));
		i++;
	}
	return (sign * (int)num);
}
