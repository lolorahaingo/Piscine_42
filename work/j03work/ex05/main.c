/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:27:51 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/06 13:08:41 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0' )
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(void)
{
    ft_putstr("blabla");
    return (0);
}
