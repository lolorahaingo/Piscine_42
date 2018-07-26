/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:09:40 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 18:10:01 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char str_src[]    = "Hello";
    char str_dest[]    = "Salutabc";

//    printf("%s\n", str_dest);
//    printf("%s", ft_strncpy(str_dest, str_src, 4));

    
    printf("%s\n", str_dest);
    printf("%s", strncpy(str_dest, str_src, 4));
    return (0);
}
