/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:52:51 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 09:52:52 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

int main(void)
{
    char str[] = "ABC";
    
    printf("%i\n", ft_str_is_uppercase(str));
    return (0);
}
