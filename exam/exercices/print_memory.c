/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 18:43:35 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/23 18:44:12 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    print_memory(const void *addr, size_t size)
{
    unsigned char const *byte_array = addr;
    write(1, byte_array, size);
}

int    main(void)
{
    int    tab[10] = {0, 23, 150, 255,
        12, 16,  42, 103};
    
    print_memory(tab, sizeof(tab));
    return (0);
}
