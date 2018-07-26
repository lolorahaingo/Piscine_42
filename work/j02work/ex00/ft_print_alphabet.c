/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 20:02:23 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/04 20:02:37 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar (char c);

void	ft_print_alphabet(void)
{
	int a;

	a = 96;
	while (a < 122)
	{
		a++;
		ft_putchar((char)a);
	}
}
