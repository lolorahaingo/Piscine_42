/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:21:37 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:21:38 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strupcase(char *str);

int main(void)
{
    char str[] = "dtyd345/;tyj";
    
    printf("%s\n", ft_strupcase(str));
    return (0);
}
