/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 18:35:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 19:32:43 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *ft_map(int *tab, int length, int(*f)(int))
{
	int *tab2;
	int i;

	i = -1;
	tab2 = (int *)malloc(sizeof(int) * length);
	while (i++ < length)
	{
		tab2[i] = f(tab[i]); 	
	}
	return (tab2);
}
