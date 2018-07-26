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
    (void)argc;
    if (argc != 4)
        return (0);
    if (ft_strcmp(argv[2], "/") == 0 && ft_atoi(argv[3]) == 0)
    {
        ft_putstr("Stop : division by zero\n");
        return (0);
    }
    else if (ft_strcmp(argv[2], "%") == 0 && ft_atoi(argv[3]) == 0)
    {
        ft_putstr("Stop : modulo by zero\n");
        return (0);
    }
    else if (ft_atoi(argv[1]) == 0 || ft_atoi(argv[3]) == 0 || (ft_strcmp(argv[2], "%") != 0
                                                           && ft_strcmp(argv[2], "/") != 0 && ft_strcmp(argv[2], "+") != 0
                                                           && ft_strcmp(argv[2], "-") != 0 && ft_strcmp(argv[2], "*") != 0))
    {
        ft_putstr("0\n");
        return (0);
    }
	return (1);
}
