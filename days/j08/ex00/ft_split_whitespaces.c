/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:36:52 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 12:12:21 by lrahaing         ###   ########.fr       */
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

int			nb_words(char *str)
{
	int		k;
	int		size_str;
	int		counter;

	k = 0;
	size_str = ft_strlen(str);
	counter = 0;
	while (str[k] != '\0')
	{
		while (!(str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < size_str)
			k++;
		if ((str[k] != ' ' && str[k] != '\n'
		&& str[k] != '\t') && k < size_str)
		{
			counter++;
			while ((str[k] != ' ' && str[k] != '\n'
			&& str[k] != '\t') && k < size_str)
				k++;
		}
	}
	return (counter);
}

int			count_letters(char *str, int k, int nb_letters)
{
	while ((str[k] != ' ' && str[k] != '\n'
				&& str[k] != '\t') && k < ft_strlen(str))
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
	if (!((*tab)[*i] = (char *)malloc(sizeof(char)
	* (count_letters(str, *k, 0) + 1))))
		return ;
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

	if (!(tab = (char **)malloc(sizeof(char *) * (nb_words(str) + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (str[k] != '\0')
	{
		while (!(str[k] != ' ' && str[k] != '\n'
					&& str[k] != '\t'))
			k++;
		if ((str[k] != ' ' && str[k] != '\n'
					&& str[k] != '\t' && str[k] != '\0'))
			fill_tab(&tab, &i, &k, str);
	}
	tab[i] = 0;
	return (tab);
}
