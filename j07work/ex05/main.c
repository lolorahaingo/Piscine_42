/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:52:03 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/16 00:16:08 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_print_words_tables(char **tab);
char		**ft_split_whitespaces(char *str);

int			main(void)
{
	char	*str;

	str = "Bonjour tout le \nmonde!  ";
	ft_print_words_tables(ft_split_whitespaces(str));
	return (0);
}
