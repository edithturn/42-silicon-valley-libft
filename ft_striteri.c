/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:41:24 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 22:46:06 by epuclla          ###   ########.fr       */
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
