/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 21:55:58 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/22 22:47:03 by loloria          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	colle(int a, int b);

int		ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	nb;

	nb = 0;
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' && str[i + 1] != '-')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		nb = (nb * 10 + str[i++]) - '0';
	if (sign == -1)
		return (-nb);
	return (nb);
}

int		main(int argc, char **argv)
{
	(void)argc;
	colle(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
