/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 16:10:51 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 13:20:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_foreach(int *tab, int length, void(*f)(int));

int		main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 67};

	ft_foreach(tab, 6, &ft_putnbr);
	return (0);
}
