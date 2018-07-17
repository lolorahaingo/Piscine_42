/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:36:52 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/14 17:36:56 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int			nb_words(char *str)
{
	int		k;
	int		size_str;
	int		counter;

	k = 0;
	size_str = ft_strlen(str) - 1;
	counter = 0;
	while (str[k] != '\0')
	{
		counter++;
		while (!(str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < size_str)
			k++;
		while ((str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < size_str)
			k++;
		while (!(str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < size_str)
			k++;
		k++;
	}
	return (counter);
}

int			count_letters(char *str, int k, int nb_letters)
{
	while ((str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < ft_strlen(str) - 1)
	{
		nb_letters++;
		k++;
	}
	return (nb_letters);
}

void		fill_tab(char ***tab, int *i, int *k, char *str)
{
	int		a;

	a = 0;
	(*tab)[*i] = (char *)malloc(sizeof(char) * (count_letters(str, *k, 0) + 1));
	while (str[*k] != ' ' && str[*k] != '\n'
			&& str[*k] != '\t' && str[*k] != '\0')
	{
		(*tab)[*i][a] = str[*k];
		(*k)++;
		a++;
	}
	(*tab)[*i][a] = '\0';
	(*i)++;
}

char		**ft_split_whitespaces(char *str)
{
	int		i;
	int		k;
	char	**tab;

	tab = (char **)malloc(sizeof(char *) * (nb_words(str) + 1));
	i = 0;
	k = 0;
	while (str[k] != '\0')
	{
		while (!(str[k] != ' ' && str[k] != '\n'
					&& str[k] != '\t'))
			k++;
		if ((str[k] != ' ' && str[k] != '\n'
					&& str[k] != '\t'))
			fill_tab(&tab, &i, &k, str);
		while (!(str[k] != ' ' && str[k] != '\n'
					&& str[k] != '\t'))
			k++;
	}
	tab[i] = 0;
	return (tab);
}
