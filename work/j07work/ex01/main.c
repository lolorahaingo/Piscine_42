/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 23:54:25 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/16 00:28:40 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		*ft_range(int min, int max);

int		main(void)
{
	int	i;
	int	max;
	int	min;

	min = 1;
	max = 6;
	i = 0;
	while (i < max - min)
	{
		printf("%i", *(ft_range(min, max) + i));
		i++;
	}
	return (0);
}
