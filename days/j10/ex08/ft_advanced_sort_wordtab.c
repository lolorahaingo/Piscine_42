/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:33:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 16:19:53 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_advanced_sort_wordtab(char **tab, int (*cmp) (char *, char *))
{
	char	*tmp;
	int		i;
	int		c;

	c = 0;
	i = 0;
	while (tab[i + 1] != '\0')
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
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
