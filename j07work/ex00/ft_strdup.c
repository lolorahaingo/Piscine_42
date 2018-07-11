/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:23:06 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 19:23:08 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *ft_strdup(char *src)
{
    char *dest;
    
    dest = malloc(sizeof(*src) * ft_strlen(src));
    dest = src;
    return(dest);
    free(dest);
}

int main(void)
{
    char tab[] = "salut";
    printf("%s", ft_strdup(tab));
    return (0);
}
