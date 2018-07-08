/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 21:26:21 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 22:09:47 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_prime(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return 0;
	while (i++ <= nb - 1 && i <= 46341)
	{
		if(nb % i == 0)
		{
			printf("%i\n", i);
			return (0);
		}
	}
	if (nb == 1 || nb == 0)
		return (0);	
	return (1);
}

int main(void)
{
	printf("%i", ft_is_prime(2147483647));	
	return (0);
}
