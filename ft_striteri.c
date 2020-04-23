/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:58 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:28:59 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned index;

	index = 0;
	if(s != NULL && f != NULL)
	{
		while(s[index])
		{
			f(index, &(s[index]));
			index++;
		}
	}
}
