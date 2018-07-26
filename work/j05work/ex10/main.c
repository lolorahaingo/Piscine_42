/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:24:05 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:24:07 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strcapitalize(char *str);

int main(void)
{
    char str[] = "     sAlut, coMment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("%s\n", ft_strcapitalize(str));
    return (0);
}
