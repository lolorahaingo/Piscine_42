/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 10:58:24 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/06 11:22:56 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b; 
	*b = tmp;
}

int main(void)
{
	int a, b;
	
	a = 5;
	b = 6;
	printf("a: %i, b : %i\n", a, b);
	ft_swap(&a, &b);
	printf("a: %i, b : %i", a, b);
	return (0);
}
