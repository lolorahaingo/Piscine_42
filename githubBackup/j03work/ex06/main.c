/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 13:15:42 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/06 13:24:23 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i]!='\0')
		i++;
	return (i);
}

int main(void)
{
    printf("%i", ft_strlen("blabla"));
    return (0);
}