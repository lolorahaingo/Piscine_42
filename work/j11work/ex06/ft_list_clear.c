/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:58:48 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 20:30:37 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;

	while (*begin_list != NULL)
	{
		tmp = *begin_list;
		*begin_list = tmp->next;
		free(tmp);
	}
	*begin_list = NULL;
}
