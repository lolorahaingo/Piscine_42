/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 20:44:54 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/06 14:58:16 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		count_digit(int nb)
{
	int i;

	i = 1;
	while (nb <= -10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int		ten_to(int i)
{
	int a;
	int p;

	a = 0;
	p = 1;
	while (a < i - 1)
	{
		p *= 10;
		a++;
	}
	return (p);
}

void	ft_putnbr(int nb)
{
	int copy_nb;
	int i;
	int character;

	i = 0;
	copy_nb = nb;
	if (nb < 0)
	{
		ft_putchar('-');
	}
	else
		nb *= -1;
	while (i < count_digit(nb))
	{
		character = copy_nb / ten_to(count_digit(copy_nb));
		ft_putchar('0' + character * -1);
		copy_nb = copy_nb - character * ten_to(count_digit(copy_nb));
		i++;
	}
}
