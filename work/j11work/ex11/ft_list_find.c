/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 21:45:34 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 21:45:36 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
    t_list *list_ptr;
    
    list_ptr = begin_list;
    while (list_ptr)
    {
        if ((*cmp)(list_ptr->data, data_ref) == 0)
            return (list_ptr);
        list_ptr = list_ptr->next;
    }
    return (NULL);
}
