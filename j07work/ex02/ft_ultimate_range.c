/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:44:01 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 23:57:22 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max)
{
    int i;
    
    i = 0;
    *range = (int *)malloc(sizeof(int) * (max - min) + 1);
    while (min + i < max)
    {
        (* range)[i] = min + i;
        i++;
    }
    return (i);
}

int main (void)
{
    int max;
    int min;
    int *tab;
    int i;
    
    min = 1;
    max = 6;
    i = 0;
    printf("range: %i\n", ft_ultimate_range(&tab, min, max));
    while (i < max - min)
    {
        printf("%i, ", tab[i]);
        i++;
    }
    return (0);
}
