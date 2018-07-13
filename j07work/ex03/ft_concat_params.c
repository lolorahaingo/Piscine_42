/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 22:53:25 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 22:53:26 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int        ft_strlen(char *str)
{
    int i;
    
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int ft_tablen(int argc, char **argv)
{
    int i;
    int a;
    int size;
    
    i = 0;
    a = 0;
    size = 0;
    while (i++ < argc - 1)
    {
        while (argv[i][a] != '\0')
        {
            size++;
            a++;
        }
        size++;
        a = 0;
    }
    return (size);
}

char *ft_concat_params(int argc, char **argv)
{
    char *str;
    int i;
    int a;
    int k;
    
    i = 0;
    a = 0;
    k = 0;
    str = (char *)malloc(sizeof(char) * ft_tablen(argc, argv));
    while (i++ < argc - 1)
    {
        while (argv[i][a] != '\0')
        {
            str[k] = argv[i][a];
            k++;
            a++;
        }
        str[k] = '\n';
        k++;
        a = 0;
    }
    return (str);
}

int main(int argc, char **argv)
{
    printf("%s", ft_concat_params(argc, argv));
    return (0);
}
