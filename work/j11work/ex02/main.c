/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 14:27:23 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/19 15:00:43 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

void ft_list_push_front(t_list **begin_list, void *data);

void		print_list(t_list *list)
{
	t_list *tmp;
	tmp = list;
	while(tmp != NULL)
	{
		printf("%d ", *((int *)tmp->data));
		tmp = tmp->next;
	}
}

int			main (void)
{
	int 	a = 45;
	int 	b = 86;
	int 	c = 50;

	t_list *begin = ft_create_elem(&a);
	ft_list_push_front(&begin, &b);
	ft_list_push_front(&begin, &c);
	print_list(begin);
	return (0);
}
