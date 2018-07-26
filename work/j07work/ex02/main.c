/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 23:57:49 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 22:50:20 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int	max;
	int	min;
	int	*tab;
	int	i;

	min = 34;
	max = 999999999;
	i = 0;
	printf("range: %i\n", ft_ultimate_range(&tab, min, max));
	while (i < max - min)
	{
		printf("%i, ", tab[i]);
		i++;
	}
	return (0);
}
