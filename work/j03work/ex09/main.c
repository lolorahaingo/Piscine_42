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
    int tab[] = {23,33,1,2,2,12,12,-12,1,84,5,5,4,5,4,5,5,6,6};
    ft_sort_integer_table(tab, 19);
    int loop;
    
    for(loop = 0; loop < 19; loop++)
        printf("%i ", tab[loop]);
    
    return 0;
}

