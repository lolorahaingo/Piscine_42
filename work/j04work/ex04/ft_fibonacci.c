/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/08 12:51:16 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 14:16:15 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else
	{
		if (index == 1 || index == 0)
			return (index);
		else
			return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
}
