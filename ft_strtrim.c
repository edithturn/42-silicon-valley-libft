/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 23:54:12 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/11 00:32:52 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strtrim(char const *s)
{

	size_t init;
	size_t final;
	char *ptr;
	int aux;

	init = 0;
	aux = 0;

	if(s == NULL)
		return NULL;

	final = ft_strlen(s);
	
	while(ft_strwithspace(s[init]) || s[init] == '\0')
	{
		init++;
		if(s[init] == '\0')
			aux = 1;
	}

	while(aux == 0 && (ft_strwithspace(s[final - 1])) || s[final - 1] == '\0')
		final--;

	ptr = ft_strnew(final - init);
	if(ptr == NULL)
		return (NULL);
	return (ft_strncpy(ptr, s + init, final + init));
}
