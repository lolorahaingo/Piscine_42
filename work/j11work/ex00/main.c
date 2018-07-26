/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 21:22:04 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 20:12:17 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data);

int		main(void)
{
	int a;

	a = 89;
	printf("%i\n", *((int *)ft_create_elem(&a)->data));
	printf("%i", a);
	return (0);
}
