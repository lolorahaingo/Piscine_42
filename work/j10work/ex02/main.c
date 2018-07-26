/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 18:28:46 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 13:29:51 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int plus_one(int nb)
{
	return (nb + 1);
}

int *ft_map(int *tab, int length, int(*f)(int));

int main(void)
{
	int length;
	int i;
	int tab[] = {1, 2, 3, 4};

	length = 4;
	i = 0;
	while (i < length)
	{
		printf("%i ", ft_map(tab, length, &plus_one)[i]);
		i++;	
	}
	return (0);	
}
