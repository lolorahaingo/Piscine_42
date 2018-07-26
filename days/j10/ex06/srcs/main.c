/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:02:31 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 23:32:56 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int res;

	if (!is_correct(argc, argv))
		return (0);
	res = calculate(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	ft_putnbr(res);
	ft_putchar('\n');
}
