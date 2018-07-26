/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:00:26 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 20:25:14 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*tmp;

    tmp = begin_list;
    if (begin_list == NULL)
        return (NULL);
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
