/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 11:28:22 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 12:08:41 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	while(i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

int main(void)
{
	printf("%i", ft_iterative_factorial(30));
}
