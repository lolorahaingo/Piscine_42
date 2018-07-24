/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kplatret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 17:57:47 by kplatret          #+#    #+#             */
/*   Updated: 2018/07/22 23:40:10 by kplatret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_strcpy(char *str, char *buf, char *tempon)
{
	int i;

	i = -1;
	while (tempon[++i])
		str[i] = tempon[i];
	str[i] = buf[0];
	str[i + 1] = '\0';
}

void	ft_first_strcpy(char *str, char *tempon)
{
	int i;

	i = -1;
	while (str[++i])
		tempon[i] = str[i];
	tempon[i] = '\0';
}

char	*ft_create_str(char *str, char *buf, int first)
{
	int		size;
	char	*tempon;

	size = 0;
	if (first != 0)
	{
		while (str[size])
			size++;
		if (!(tempon = (char *)malloc(size + 1)))
			return (0);
		ft_first_strcpy(str, tempon);
		free(str);
		if (!(str = (char *)malloc(size + 1)))
			return (0);
		ft_strcpy(str, buf, tempon);
	}
	else
	{
		if (!(str = (char *)malloc(2)))
			return (0);
		str[0] = buf[0];
		str[1] = '\0';
	}
	return (str);
}

int		main(void)
{
	int width;
	int heigth;
	char *str;
	char buf[1];
	char **tab;

	width = 0;
	heigth = 1;
	while ((heigth = read(0, buf, 1)))
	{
		str = ft_create_str(str, buf, width);
		width++;
	}
	tab = ft_create_tab(str, width);
	ft_is_colle(tab);
	free(str);
}
