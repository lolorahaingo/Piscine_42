/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:19:30 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:19:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main(void)
{
    char s1[] = "1235";
    char s2[] = "21235";
    
    printf("%i\n", strcmp(s1, s2));
    printf("%i", ft_strcmp(s1, s2));
    return (0);
}
