/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 22:48:15 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/10 23:10:27 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char * ft_strmap(char const *s, char (*f)(char))
{

	int i;
	char *ptr;
	
	if (s == NULL || f == NULL)
		return NULL;

	ptr = ft_strnew(ft_strlen(s));
	if(!ptr)
		return NULL:

	i = 0;
	while(s[i])
	{	
		ptr[i] = f(s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);

}

