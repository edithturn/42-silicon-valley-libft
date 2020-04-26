/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/16 22:35:56 by edith             #+#    #+#             */
/*   Updated: 2020/04/25 17:58:13 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
	/*char *s =  "*hello*fellow***students*";*/
	char *s = "                  olol";
	char c = '*';
	char **ptr;
	int i;

	i = 0;
	ptr  = ft_split(s, c);
	while(ptr[i] != '\0')
	{
		printf("%s", ptr[i]);
		printf("%s", ",");
		i++;
	}
	return (0);
}