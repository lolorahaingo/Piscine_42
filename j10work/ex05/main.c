/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 22:20:44 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 22:50:26 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int test_sort(int tab1, int tab2)
{
	return (tab1 - tab2);  

}

int main(void)
{
	int tab[] = {1, 2, 3, 6, 5};
	
	printf("%i ", ft_is_sort(tab, 5, &test_sort));
	return (0);
}
