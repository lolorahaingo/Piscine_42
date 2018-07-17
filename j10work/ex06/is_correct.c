/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_correct.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:27:12 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 23:41:42 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int is_correct(int argc, char **argv)
{
	if (ft_atoi(argv[1]) == 0 || ft_atoi(argv[3]) == 0 || (argv[2] != "%" 
				&& argv[2] != "/" && argv[2] != "+" && argv[2] != "-" && argv[2] != "*"))
		return (0);
	return (1);
}