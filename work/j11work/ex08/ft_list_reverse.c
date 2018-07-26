/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 20:08:42 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/24 11:58:59 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"


//t_list *reverse(t_list *previous, t_list *current)
//{
//    t_list *tmp;
//
//    if (current->next)
//    {
//        tmp = reverse(current, current->next);
//        current->next = previous;
//        return (tmp);
//    }
//    current->next = previous;
//    return (current);
//}

void ft_list_reverse(t_list **begin_list)
{
//    *begin_list = reverse(NULL, *begin_list);
    t_list *cur;
    t_list *prev;
    t_list *next;

    prev = NULL;
    cur = *begin_list;
    while (cur != NULL)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *begin_list = prev;
}

