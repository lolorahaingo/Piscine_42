/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:41:11 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 12:50:19 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power == 1) 
		return (nb);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power-1));
}

int main(void)
{
	printf("%i", ft_recursive_power(5, 1));
	return (0); 	
}
