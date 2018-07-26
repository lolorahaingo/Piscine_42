/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 22:53:25 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 15:12:43 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_tablen(int argc, char **argv)
{
	int		i;
	int		a;
	int		size;

	i = 0;
	a = 0;
	size = 0;
	while (i++ < argc - 1)
	{
		while (argv[i][a] != '\0')
		{
			size++;
			a++;
		}
		size++;
		a = 0;
	}
	return (size);
}

char		*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		a;
	int		k;

	i = 0;
	k = 0;
	if (!(str = (char *)malloc(sizeof(char) * ft_tablen(argc, argv))))
		return (0);
	while (i++ < argc - 1)
	{
		a = 0;
		while (argv[i][a] != '\0')
		{
			str[k] = argv[i][a];
			k++;
			a++;
		}
		if (i != argc - 1)
			str[k] = '\n';
		else
			str[k] = '\0';
		k++;
	}
	return (str);
}
