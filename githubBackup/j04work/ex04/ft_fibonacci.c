/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:51:16 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/08 15:39:53 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
	int i;

	i = index + 1;
	if (index < 0)
		return (-1);
	else
	{
		if (i == 1 + 1)
			return (1);
		else if (i == 1 + 1)
			return (0);
		else	
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}

int main(void)
{
	printf("%i", ft_fibonacci(5));
	return (0);
}
