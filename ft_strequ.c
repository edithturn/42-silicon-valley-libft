/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:28:42 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/22 21:28:44 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strequ(char const *s1, char const *s2)
{
	if(s1 == NULL || s2 == NULL)
		return 0;
	if(ft_strcmp(s1, s2) == 0)
		return 1;
	else
		return 0;
}
