/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 12:25:51 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/25 18:03:28 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_element;
	t_list	*tmp;

	new_element = ft_create_elem(data);
	tmp = *begin_list;
	new_element->next = tmp;
	*begin_list = new_element;
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	if (ac <= 0)
		return (NULL);
	i = 0;
	begin_list = ft_create_elem((char *)av[i]);
	while (++i < ac)
	{
		ft_list_push_front(&begin_list, (char *)av[i]);
	}
	return (begin_list);
}
