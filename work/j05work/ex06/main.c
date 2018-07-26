/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:19:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/12 14:56:08 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "112";
    char s2[] = "112";
    
    printf("%i\n", strcmp(s1, s2));
    printf("%i", ft_strcmp(s1, s2));
    return (0);
}
