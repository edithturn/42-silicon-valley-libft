/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: epuclla <epuclla@student.42.us.org>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/22 21:41:26 by epuclla           #+#    #+#             */
/*   Updated: 2020/04/25 12:00:53 by epuclla          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(void)
{
    char *c;
    char *a;
    char *ptr;
    
	c = "\t\t\t\t\t\t\t\tHello \t  Please\n Trim me !\t\t\t\t\t\t\t";
    a = "	";
    ptr = ft_strtrim(c, a);
	/*gg = strtrim(c, a);*/
    printf("%s", ptr);
	 /*printf("%s", gg);*/

    return (0);
}