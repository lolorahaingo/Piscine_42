/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 12:48:25 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/07 16:36:46 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	print_abc(char a, char b, char c, char d)
{
	if (a * 10 + b < c * 10 + d)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(' ');
		ft_putchar(c);
		ft_putchar(d);
		if (!(a == '9' && b == '8'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	init_char(char *a, char *b, char *c, char *d)
{
	*a = '0';
	*b = '0';
	*c = '0';
	*d = '0';
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	init_char(&a, &b, &c, &d);
	while (++a <= '9')
	{
		while (++b <= '9')
		{
			while (++c <= '9')
			{
				while (++d <= '9')
				{
					print_abc(a, b, c, d);
				}
				d = '0';
			}
			c = '0';
		}
		b = '0';
	}
}
