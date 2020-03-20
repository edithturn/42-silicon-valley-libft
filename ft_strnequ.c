/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:29:54 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 23:32:24 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if(s1 == NULL || s2 == NULL)
		return;
	if(ft_strncmp(s1, s2, n) == 0)
		return 1;
	else
		return 0;
}