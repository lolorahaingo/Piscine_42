/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:05:43 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/22 12:10:12 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

t_list *ft_list_last(t_list *begin_list);

t_list *ft_create_elem(void *data)
{
    t_list *elem;
    if(!(elem = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    elem->data = data;
    elem->next = NULL;
    return (elem);
}

void ft_list_push_back(t_list **begin_list, void *data)
{   
	t_list	*new_elem; 
	t_list	*tmp;

	new_elem = ft_create_elem(data);
	tmp = *begin_list;
	while (tmp->next != NULL)
		tmp = tmp->next;	
	tmp->next = new_elem;
}

int main(void)
{
	int 	a = 45;
	int 	b = 86;
	int 	c = 50;
	int     d = 73;
	int     e = 92;
	int     f = 61;

	t_list *begin = ft_create_elem(&a);
	ft_list_push_back(&begin, &b);
	ft_list_push_back(&begin, &c);
	ft_list_push_back(&begin, &d);
	ft_list_push_back(&begin, &e);
	ft_list_push_back(&begin, &f);
	printf("%i", *((int *)ft_list_last(begin)->data));
	return (0);
}
