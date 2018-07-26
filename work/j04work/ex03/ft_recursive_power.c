/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:41:11 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 14:13:56 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
    if (power < 0)
        return (0);
	else if (power == 1)
		return (nb);
	else if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
