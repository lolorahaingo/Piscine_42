/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:22:47 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:22:54 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strlowcase(char *str);

int main(void)
{
    char str[] = "dABC345/;tyj";
    
    printf("%s\n", ft_strlowcase(str));
    return (0);
}
