/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:44:32 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 09:44:34 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);

int main(void)
{
    char str[] = "salutcommenttuvasmotsqua rantedeuxcinquanteetun";
    
    printf("%i\n", ft_str_is_alpha(str));
    return (0);
}
