/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 12:22:43 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 12:24:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
	int *a;
	int *b;
	int y;
	int z;

	y = 42;
	z = 5;
	a = &y;
	b = &z;
	ft_ultimate_div_mod(a,b);
	printf("%i\n",*a);
	printf("%i\n",*b);
	return (0);
}
