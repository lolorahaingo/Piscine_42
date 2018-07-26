/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 17:02:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 17:02:32 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_wordtab(char **tab);

int main(void)
{
    char *tab[5];
    int i;
    
    i = 0;
    tab [0] = "blab\0";
    tab [1] = "Bello\0";
    tab [2] = "AA\0";
    tab [3] = "blaa\0";
    tab [4] = 0;
    ft_sort_wordtab(tab);
    
    while (tab[i] != 0)
    {
        printf("%s\n", tab[i]);
        i++;
    }
    return (0);
}
