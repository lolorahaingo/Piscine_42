/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:20:18 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:20:19 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
    char s1[] = "13445";
    char s2[] = "13456";
    int n = 4;
    
    printf("%i\n", strncmp(s1, s2, n));
    printf("%i", ft_strncmp(s1, s2, n));
    return (0);
}

