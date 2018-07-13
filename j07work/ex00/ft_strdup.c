/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 19:23:06 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 21:11:15 by lrahaing         ###   ########.fr       */
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;
	int size_dest;

	size_dest = ft_strlen(dest) - 1;
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size_dest)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char *ft_strdup(char *src)
{
	char *dest;

	dest = (char *)malloc(sizeof(*src) * ft_strlen(src));
	if (dest == NULL)
		return (NULL);
	ft_strcpy(dest, src);
	return(dest);
}

int main(void)
{
	char tab[] = "salut";
	printf("%s", ft_strdup(tab));
	return (0);
}
