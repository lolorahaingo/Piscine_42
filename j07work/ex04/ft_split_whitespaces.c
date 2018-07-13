/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:25:42 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/12 19:26:40 by lrahaing         ###   ########.fr       */
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
        i++;
    return (i);
}

int count_word(char *str)
{
    int i;
    int size_str;
    int counter;
    
    i = 0;
    size_str = ft_strlen(str);
    counter = 0;
    while (i < size_str)
    {
        if ((str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            && (str[i + 1] != ' ' && str[i + 1] != '\n' && str[i + 1] != '\t'))
            counter++;
        i++;
    }
    return (counter + 1);
}

int *tab_wordlen(char *str)
{
    int *tab;
    int i;
    int k;
    int j;
    int nb_word = count_word(str);
    
    i = 0;
    k = 0;
    j = 0;
    tab = (int *)malloc(sizeof(int) * nb_word);
    while (i < nb_word - 1)
    {
        while (!(str[k] == ' ' || str[k] == '\n' || str[k] == '\t'))
        {
            j++;
            k++;
        }
        k++;
        if ((str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
            && (str[k + 1] != ' ' && str[k + 1] != '\n' && str[k + 1] != '\t'))
        {
            tab[i] = j;
            j = 0;
            i++;
            k++;
        }
    }
    return (tab);
}

char **ft_split_whitespaces(char *str)
{
    char **tab;
    int i;
    int k;
    int j;
    int nb_word = count_word(str);

    i = 0;
    k = 0;
    j = 0;
    tab = (char **)malloc(sizeof(char) * nb_word);
    while (i < nb_word - 1)
    {
        tab[i] = (char *)malloc(sizeof(char) * (tab_wordlen(str)[i]));
        while (!(str[k] == ' ' || str[k] == '\n' || str[k] == '\t'))
        {
            tab[i][j] = str[k];
            k++;
            j++;
        }
        while (str[k] == ' ' || str[k] == '\n' || str[k] == '\t')
        {
            i++;
            k++;
            j = 0;
        }
        
        
    }
    return (tab);
}

int main(int argc, char **argv)
{
    char str[] = "Bonjour  j'essaie     \n  de\tseparer les caracteres en   un  tableau";
    printf("%i", count_word(str));
    printf("\n%i", tab_wordlen(str)[1]);
//    printf("\n%s", ft_split_whitespaces(str)[1]);
    return (0);
}
