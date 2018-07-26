/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 21:44:01 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 15:11:11 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max
			|| !(*range = (int *)malloc(sizeof(int) * (max - min) + 1)))
		*range = NULL;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
