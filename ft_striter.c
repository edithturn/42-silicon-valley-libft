/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:34:42 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 22:41:12 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striter(char *s, void (*f)(char ))
{
	int i;

	i = 0;
	if(!s || !f)
		return ;
	while(s[i] != '\0')
	{
		f(s[i]);
		i++;
	}
}
