/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 11:22:52 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/24 18:24:12 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new_elem;
	t_list	*tmp;

	new_elem = ft_create_elem(data);
	tmp = *begin_list;
	if (*begin_list == NULL)
	{
		*begin_list = new_elem;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_elem;
}
