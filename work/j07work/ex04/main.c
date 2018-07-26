/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 17:29:20 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 15:13:57 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char		**ft_split_whitespaces(char *st

int			main(void)
{
	char	*str;

	str = "          \n\t";
	printf("%s\n", ft_split_whitespaces(str)[0]);
	return (0);
}
