/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:52:35 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 14:52:36 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main(void)
{
    char str_src[]    = "abcde";
    char str_dest[50]    = "SalutHello";
    
    printf("%s\n", str_dest);
//    printf("maison: %u \n", ft_strlcat(str_dest, str_src, 14));
//    printf("%s", str_dest);

    printf("officiel: %lu\n", strlcat(str_dest, str_src, 14));
    printf("%s\n", str_dest);
    return (0);
}
