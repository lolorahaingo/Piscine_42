/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 23:02:31 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 23:03:24 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int main(int argc, char **argv)
{
    if (argc != 4)
        return (0);
    else if (!is_correct(argc, argv))
    {
        ft_putstr("0\0");
        return (0);
    }
    int res;
    
    res = calculate(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
    ft_putnbr(res);
}
