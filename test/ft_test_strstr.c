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
    char *s1 = "HELLO";
    char *s2 = "LLO";
    char *i1 = strnstr(s1, s2, 2);
    char *i2 = ft_strnstr(s1, s2, 2);
    return (0);

}
