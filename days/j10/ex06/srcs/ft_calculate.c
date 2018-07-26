/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 14:42:01 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 23:14:29 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		calculate(int first_number, char *op, int second_number)
{
	int	(*operations[5])(int, int);

	operations[0] = &ft_add;
	operations[1] = &ft_sub;
	operations[2] = &ft_mul;
	operations[3] = &ft_div;
	operations[4] = &ft_mod;
	if (ft_strcmp(op, "+") == 0)
		return (*(operations[0]))(first_number, second_number);
	if (ft_strcmp(op, "-") == 0)
		return (*(operations[1]))(first_number, second_number);
	if (ft_strcmp(op, "*") == 0)
		return (*(operations[2]))(first_number, second_number);
	if (ft_strcmp(op, "/") == 0)
		return (*(operations[3]))(first_number, second_number);
	if (ft_strcmp(op, "%") == 0)
		return (*(operations[4]))(first_number, second_number);
	return (0);
}
