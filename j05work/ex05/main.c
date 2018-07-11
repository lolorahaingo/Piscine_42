/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 21:51:38 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/09 21:51:40 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int    main(void)
{
    char str[] = "abcDEFabc";
    char fnd[] = "DEF";
    printf("%s\n", ft_strstr(str, fnd));
    printf("%s", strstr(str, fnd));
    return (0);
}
