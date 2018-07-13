/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:12:38 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 21:40:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int *tab;
	int i;
	
	i = 0;
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (min >= max)
		return (NULL);
	while (min + i < max)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);		
}

int main (void)
{
	int i;
	int max;
	int min;


	min = 1;
	max = 6;
	i = 0;
	while (i < max - min)
	{
		printf("%i", *(ft_range(min, max) + i));
		i++;
	}
	free(ft_range(min, max));
	return (0);
}
