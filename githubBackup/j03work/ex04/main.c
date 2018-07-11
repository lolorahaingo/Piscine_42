/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 12:06:17 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/06 12:21:31 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

int main(void)
{
	int a, b;
	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("a: %i, b: %i", a, b); 
}
