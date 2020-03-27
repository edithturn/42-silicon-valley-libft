/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_test_ft_strncpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 12:06:05 by epuclla           #+#    #+#             */
/*   Updated: 2020/03/02 09:25:24 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main()
{
   /*char *s1 = "HELLO";*/
    /*char *s2 = "LLO";*/

    char *s2 = "";
	char *s1 = "";

    const char *i1 = strstr(s1, s2);
    const char *i2 = ft_strstr(s1, s2);
    printf("%s", i1);
    printf("%c", '\n');
    printf("%s", i2);
    return (0);
}
