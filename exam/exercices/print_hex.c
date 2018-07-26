/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 16:38:34 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/25 19:03:50 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char convert_to_hex(int rest)
{
	char letter;

	letter = rest + 'a' - 10;
	return (letter);
}

char *get_hex(int nb)
{
	int i;
	char *hex_val;
	int rest;

	i = 16;
	hex_val = (char *)malloc(17);
	while (i > -1)
	{
		rest = nb % 16;
		nb /= 16;
		if (rest < 10)
			hex_val[i] = rest + '0';
		else 
			hex_val[i] = convert_to_hex(rest);	
		i--;
	}
	hex_val[i] = '\0';
	return (hex_val);	
}

void print_hex(char *tab)
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		while (tab[i] == '0')
			i++;
		write(1, &tab[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int val;

	val = 10;
	if (argc <= 1)
		return (0);
	print_hex(get_hex(atoi(argv[1])));	
	return (0);
}
