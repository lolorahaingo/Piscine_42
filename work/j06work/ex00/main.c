/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:34:17 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/12 10:50:32 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(char c);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);

int main(void)
{
	char str1[] = "Bonjour";
	char str2[] = "Salut";
	int tab1[] = {1, 2, 3};
	int tab2[] = {2, 3, 4};

	ft_putchar('O');
	printf("\ntab1: %i, tab2: %i\n", tab1[0], tab2[0]);
	ft_swap(tab1, tab2);
	printf("tab1: %i, tab2: %i\n", tab1[0], tab2[0]);
	ft_putstr(str1);
	printf("\nstr1len: %i\n", ft_strlen(str1));
	printf("strcmp: %i\n", ft_strcmp(str1, str2));

	return (0);
}
