/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:29:20 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/16 00:07:28 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		**ft_split_whitespaces(char *str);

int			main(void)
{
	char	*str;

	str = "    Bonjour\nj'essaie\nde\tseparera \
		\n les caracteres en un tableau    ";
	printf("%s\n", ft_split_whitespaces(str)[9]);
	return (0);
}
