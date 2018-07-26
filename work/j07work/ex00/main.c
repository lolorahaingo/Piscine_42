/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 23:49:16 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/18 15:03:53 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char		*ft_strdup(char *src);

int			main(void)
{
	char	*tab;

	tab = "salut";
	printf("%s - ", ft_strdup(tab));
	printf("%s", strdup(tab));
	return (0);
}
