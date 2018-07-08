/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:09:39 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 12:28:04 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb == 1 || nb == 0)
		return 1;
	return nb * ft_recursive_factorial(nb - 1);
}

int main(void)
{
	printf("%i", ft_recursive_factorial(4));
	return (0);
}
