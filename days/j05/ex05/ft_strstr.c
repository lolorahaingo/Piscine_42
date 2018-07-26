/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:46:40 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/15 12:02:58 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	size_str;
	int	size_to_find;
	int	i;
	int	a;

	size_str = ft_strlen(str);
	size_to_find = ft_strlen(to_find);
	i = 0;
	a = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			while (str[i + a] == to_find[a])
				a++;
			if (a == size_to_find)
				return (str + i);
			a = 0;
		}
		i++;
	}
	return (0);
}
