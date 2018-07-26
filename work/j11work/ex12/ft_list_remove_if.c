/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 22:02:51 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 22:02:58 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void elem_del(t_list **cur, t_list **prev, t_list **next, t_list **begin_list)
{
    if (*prev == NULL) //debut
    {
        *next = *cur->next
        *prev = *next
        *begin_list = *next;
        *cur = *next;
    }
    else if (*next == NULL) //fin
    {
        
    }
    else //milieu
    {
        
    }
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *cur;
    t_list *prev;
    t_list *next;
    
    cur = *begin_list;
    prev = NULL;
    next = cur->next;
    while (cur)
    {
        if ((*cmp)(cur->data, data_ref) == 0)
        {
            elem_del(&cur, &prev, &next, &begin_list);
        }
        cur = cur->next;
    }
}
