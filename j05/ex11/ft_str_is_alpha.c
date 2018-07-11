/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 00:17:17 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 11:59:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] <= 'z' && str[i] >= 'a')
					|| (str[i] <= 'Z' && str[i] >= 'A')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
