/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:01:07 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 11:01:09 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcat(char *dest, char *src);

int main(void)
{
    char str_src[]    = "Hello";
    char str_dest[50]    = "SalutLaurent";
    
//    printf("%s\n", str_dest);
//    printf("%s", ft_strcat(str_dest, str_src));
    
    
    printf("%s\n", str_dest);
    printf("%s", strcat(str_dest, str_src));
    return (0);
}
