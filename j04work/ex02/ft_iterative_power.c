/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:29:04 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 12:40:17 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	while (i < power)
	{
		nb = nb * nb;
		i++;
	}
	if (power == 0)
		return(1);
	return (nb);
}

int main(void)
{
	printf("%i", ft_iterative_power(5, 2));
	return (0);
}
