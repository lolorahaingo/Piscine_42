/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preint_bits.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 13:47:38 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/25 16:34:35 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i;
	int bytes[8];
	int nb;
	int reste;

	i = 7;
	nb = octet;
	while (i > -1)
	{
		reste = nb % 2;
		nb /= 2;
		bytes[i] = reste;
		i--;
	}
	i = 0;
	while (i < 8)
	{
		printf("bytes[%i] = %i\n", i, bytes[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	(void)argc;
	print_bits(200);
	return (0);	
}
