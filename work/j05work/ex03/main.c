/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 15:35:05 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 15:38:08 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char    *ft_strcpy(char *dest, char *src);

int main(void)
{
    char str_src[]    = "Salut";
    char str_dest[]    = "Bonjour";
    
//    printf("%s\n", str_dest);
//    ft_strcpy(str_dest, str_src);
//    printf("%s", str_dest);
    

    printf("%s\n", str_dest);
    strcpy(str_dest, str_src);
    printf("%s", strcpy(str_dest, str_src));
    return (0);
}

