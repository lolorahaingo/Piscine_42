/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:35:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 13:26:45 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tab_return;

	i = -1;
	if (!(tab_return = (int *)malloc(sizeof(int) * (length))))
		return (NULL);
	while (i++ < length - 1)
		tab_return[i] = f(tab[i]);
	return (tab_return);
}
