/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 00:10:05 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 00:10:09 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_integer_table(int *tab, int size);

int main(void)
{
    int tab[] = {1, 2, 3, 6, 9, 4, 5, 8, 9, 6, 4, 1, 5};
    ft_sort_integer_table(tab, 13);
    int loop;
    
    for(loop = 0; loop < 13; loop++)
        printf("%i ", tab[loop]);
    
    return 0;
}

