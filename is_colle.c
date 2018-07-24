 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_colle.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kplatret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/21 16:42:46 by kplatret          #+#    #+#             */
/*   Updated: 2018/07/22 23:41:26 by kplatret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_find_colle(int *colle, char *c)
{
	if (c[0] == 'o' && c[0] == c[2] && c[1] == c[2] && c[2] == c[3])
		colle[0] = 1;
	else if (c[0] == '/' && (c[1] == 92 || c[5] <= 1) &&
			((c[1] == c[2] && c[3] == c[0]) || c[4] <= 1))
		colle[1] = 1;
	else if (c[0] == 'A')
	{
		if (c[0] == c[1])
			colle[2] = 1;
		if (c[0] == c[2])
			colle[3] = 1;
		if (c[0] == c[3])
			colle[4] = 1;
	}
}

int		ft_check_line(char **tab, int *colle, char *c)
{
	int	i;
	int	ii;
	int	size_line;

	i = 0;
	while (tab[i])
	{
		ii = 0;
		while (tab[i][ii])
			ii++;
		if (i == 0)
			size_line = ii;
		if (ii != size_line)
			return (0);
		i++;
	}
	c[0] = tab[0][0];
	c[1] = tab[0][ii - 1];
	c[2] = tab[i - 1][0];
	c[3] = tab[i - 1][ii - 1];
	c[4] = i;
	c[5] = ii;
	return (1);
}

int		ft_check_carac_fnl_line(char *str, int *colle, int s, int j)
{
	int i;

	i = 1;
	if (j == -1)
		while (i <= s)
		{
			if (colle[0] == 1 && str[i] != '-')
				return (0);
			if (colle[1] == 1 && str[i] != '*')
				return (0);
			if ((colle[2] == 1 || colle[3] == 1 || colle[4] == 1) &&
					str[i] != 'B')
				return (0);
			i++;
		}
	if (j > -1)
	{
		if (colle[0] == 1 && str[j] != '|')
			return (0);
		if (colle[1] == 1 && str[j] != '*')
			return (0);
		if ((colle[2] == 1 || colle[3] == 1 || colle[4] == 1) && str[j] != 'B')
			return (0);
	}
	return (1);
}

int		ft_check_rectangle(char **tab, char *c, int *colle)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		if (i == 0 || i == c[4] - 1)
			if (!(ft_check_carac_fnl_line(tab[i], colle, c[5] - 2, -1)))
				return (0);
		while (tab[i][j] && i != 0 && i < c[4] - 1)
		{
			if (j == 0 || j == c[5] - 1)
				if (!(ft_check_carac_fnl_line(tab[i], colle, 0, j)))
					return (0);
			if (j > 0 && j < c[5] - 2)
			{
				if (tab[i][j] != 32)
					return (0);
			}
			j++;
		}
		i++;
	}
	return (1);
}

int		*ft_is_colle(char **tab)
{
	int		*colle;
	char	c[7];
	int		i;

	i = 0;
	if (!(colle = malloc(24)))
		return ((int *)NULL);
	while (i < 5)
	{
		colle[i] = 0;
		i++;
	}
	if (!(ft_check_line(tab, colle, c)))
		return (0);
	ft_find_colle(colle, c);
	if (!(ft_check_rectangle(tab, c, colle)))
		return (0);
	return (colle + 0);
}

int		main(int argc, char **argv)
{
	int i = 1;
	while (i < argc)
	{
		argv[i - 1] = argv [i];
		i++;
	}
	argv[i - 1] = (char *)NULL;
	int *colle;
	colle = ft_is_colle(argv);
}
