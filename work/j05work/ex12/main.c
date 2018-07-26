/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:45:21 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 09:45:23 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

int main(void)
{
    char str[] = "123 ";
    
    printf("%i\n", ft_str_is_numeric(str));
    return (0);
}
