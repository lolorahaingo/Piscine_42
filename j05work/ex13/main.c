/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:51:54 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 09:51:57 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

int main(void)
{
    char str[] = "jgjhv";
    
    printf("%i\n", ft_str_is_lowercase(str));
    return (0);
}
