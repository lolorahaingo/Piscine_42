/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 19:32:47 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/22 19:34:43 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_list_reverse(t_list **begin_list);

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
    t_list    *new_elem;
    t_list    *tmp;
    
    new_elem = ft_create_elem(data);
    tmp = *begin_list;
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = new_elem;
}

void        print_list(t_list *list)
{
    t_list *tmp;
    tmp = list;
    printf("= ");
    while(tmp)
    {
        printf("%i ->", *((int *)tmp->data));
        tmp = tmp->next;
    }
    printf("NULL");
    printf("\n");
}

int main(void)
{
    int     a = 1;
    int     b = 2;
    int     c = 3;
    int     d = 4;
    int     e = 5;
    int     f = 6;
    
    t_list *begin = ft_create_elem(&a);
    ft_list_push_back(&begin, &b);
    ft_list_push_back(&begin, &c);
    ft_list_push_back(&begin, &d);
    ft_list_push_back(&begin, &e);
    ft_list_push_back(&begin, &f);
    print_list(begin);
    ft_list_reverse(&begin);
    print_list(begin);
    return (0);
}
