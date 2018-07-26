/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:20:44 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 14:22:12 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_advanced_sort_wordtab(char **tab, int(*cmp)(char *, char *));

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && (i != ft_strlen(s1) || i != ft_strlen(s2)))
		i++;
	return (s1[i] - s2[i]);
}

int			main(void)
{
	char	*tab[5];
	int		i;

	i = 0;
	tab [0] = "blab\0";
	tab [1] = "Bello\0";
	tab [2] = "AA\0";
	tab [3] = "blaa\0";
	tab [4] = 0;
	ft_advanced_sort_wordtab(tab, &ft_strcmp);

	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
