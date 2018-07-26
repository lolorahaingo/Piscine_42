/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 14:24:00 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 16:18:09 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void		ft_sort_wordtab(char **tab)
{
	char	*tmp;
	int		i;
	int		c;

	i = 0;
	c = 0;
	while (tab[i + 1] != '\0')
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			c = 1;
		}
		i++;
		if (c == 1)
		{
			c = 0;
			i = 0;
		}
	}
}
