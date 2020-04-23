/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 20:07:19 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 20:07:21 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_abs(int num)
{
	unsigned int nu;

	if (num < 0)
		nu = (unsigned int)-num;
	else
		nu = num;
	return (nu);
}
