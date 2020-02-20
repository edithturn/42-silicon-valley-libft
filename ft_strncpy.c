/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 10:53:34 by epuclla           #+#    #+#             */
/*   Updated: 2020/02/19 13:41:55 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncpy(char *dst, char *src, unsigned int len)
{
	unsigned int i;
	
	i = 0;
	while((i < len) && src[i])
	{
		dst[i] = src[i];
		i += 1;
	}
	while(i < len)
		dst[i++] = '\0';
	return(dst);
}
