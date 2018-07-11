/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 22:25:43 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 22:25:44 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int        ft_putchar(char c);

int        count_digit(int nb)
{
    int i;
    
    i = 1;
    while (nb <= -10)
    {
        nb = nb / 10;
        i++;
    }
    return (i);
}

int        ten_to(int i)
{
    int a;
    int p;
    
    a = 0;
    p = 1;
    while (a < i - 1)
    {
        p *= 10;
        a++;
    }
    return (p);
}

void    ft_putnbr(int nb)
{
    int copy_nb;
    int i;
    int character;
    
    i = 0;
    if (nb < 0)
        ft_putchar('-');
    else
        nb = -nb;
    copy_nb = nb;
    while (i < count_digit(nb))
    {
        character = copy_nb / ten_to(count_digit(copy_nb));
        ft_putchar('0' + character * -1);
        copy_nb = copy_nb - character * ten_to(count_digit(copy_nb));
        i++;
    }
}
void    store_n(int n, int i)
{
    int a;
    int b;
    int character;
    int tab[ten_to(n + 1)][n];
 
    a = 0;
    b = 0;
    while (a < n)
    {
        if (i < ten_to(n))
        {
            tab[i - 1][a] = 0;
        }
        a++;
        tab[i][a] = i;
        printf("%i ", tab[i][0]);
    }
}

void    ft_print_combn(int n)
{
    int n_max;
    int i;
    
    n_max = ten_to(n + 1) - 1;
    i = 1;
    while (i <= n_max)
    {
        store_n(n, i);
        i++;
    }
}
