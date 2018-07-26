/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:12:40 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 11:12:42 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, int nb);

int main(void)
{
    char str_src[]    = "Hello";
    char str_dest[50]    = "SalutLaurent";
    
    printf("%s\n", str_dest);
    printf("%s", ft_strncat(str_dest, str_src, 7));
    
    
//    printf("%s\n", str_dest);
//    printf("%s", strncat(str_dest, str_src, 7));
    return (0);
}
