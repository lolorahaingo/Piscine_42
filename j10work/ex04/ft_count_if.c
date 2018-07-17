/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 20:07:16 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 20:14:15 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i] == 1))
			counter++;
	}
	return (counter);
}
