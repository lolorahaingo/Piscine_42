/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 00:35:39 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/05 00:47:22 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);
void	ft_is_negative(int n);

int	main(void)
{
	int n;
	n = -1;
	ft_is_negative(n);
	return (0);
}