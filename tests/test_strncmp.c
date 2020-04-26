/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/25 19:16:20 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/26 12:18:38 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
	char *s1;
	char *s2;
	size_t n = 3;

	s1 = "HolaMama";
	s2 = "HolaMlaMa";
	
	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1, s2, n));

	return (0);
}
