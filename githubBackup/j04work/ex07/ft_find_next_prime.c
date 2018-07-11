/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 22:18:19 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 22:33:09 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_find_next_prime2(int nb)
{
	int i;

	i = 1;
	if (nb < 0)
		return ft_find_next_prime2(nb + 1);
	while (i++ <= nb - 1 && i <= 46341)
	{
		if(nb % i == 0)
		{
			printf("%i\n", i);
			return ft_find_next_prime2(nb + 1);
		}
		return nb;
	}
	return nb;
}

int ft_find_next_prime(int nb)
{
    return ft_find_next_prime2(nb);
}

int main(void)
{
	printf("%i", ft_find_next_prime(6));	
	return (0);
}
