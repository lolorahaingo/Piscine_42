/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_tab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kplatret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 23:12:14 by kplatret          #+#    #+#             */
/*   Updated: 2018/07/22 23:38:57 by kplatret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_add_tab(char **tab, int *j, char *str)
{
	int i;

	i = 0;
	if (!(tab[j[1]] = (char *)malloc(j[0] - j[2] + 1)))
		return (0);
	while (j[2] < j[0])
	{
		tab[j[1]][i] = str[j[2]];
		i++;
		j[2]++;
	}
	tab[j[1]][i] = '\0';
	return (tab);
}

char	**ft_create_tab(char *str, int size)
{
	int		i[3];
	char	**tab;

	i[0] = -1;
	i[1] = 0;
	i[2] = 0;
	while (str[++i[0]])
		if (str[i[0]] == '\n')
			i[1]++;
	if (!(tab = (char **)malloc(i[1] + 1)))
		return (0);
	tab[i[1]] = (char *)NULL;
	i[1] = 0;
	while (str[i[0]])
	{
		if (str[i[0]] == '\n')
		{
			tab = ft_add_tab(tab, i, str);
			i[2] = i[0] + 1;
			i[1]++;
		}
		i[0]++;
	}
	return (tab);
}
