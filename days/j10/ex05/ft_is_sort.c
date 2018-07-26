/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:33:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 13:36:08 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int sort_up;
	int sort_down;

	i = 0;
	sort_up = 1;
	sort_down = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			sort_up = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			sort_down = 0;
		i++;
	}
	if (sort_down == 0 && sort_up == 0)
		return (0);
	return (1);
}
