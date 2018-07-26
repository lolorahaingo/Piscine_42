/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:58:07 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 09:58:09 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

int main(void)
{
    char str[] = "ABC";
    
    printf("%i\n", ft_str_is_printable(str));
    return (0);
}
