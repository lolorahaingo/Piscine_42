/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 11:12:33 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:15:33 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int size_dest;
	int size_src;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	while (size_dest + i < size_dest + nb)
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	return (dest);
}

