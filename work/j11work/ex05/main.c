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

t_list *ft_list_push_params(int ac, char **av);

void        print_list(t_list *list)
{
    t_list *tmp;
    tmp = list;
    while(tmp)
    {
        printf("%s -> ", (char *)tmp->data);
        tmp = tmp->next;
    }
    printf("NULL");
}

int main(int argc, char **argv)
{
    print_list(ft_list_push_params(argc, argv));
	return (0);
}
