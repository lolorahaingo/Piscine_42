/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 14:52:43 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/11 12:07:11 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int			i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int			size_dest;
	int			size_src;
	int			i;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	while (size_dest + i < size_dest + size - 1)
	{
		dest[i + size_dest] = src[i];
		i++;
	}
	return (size_dest + size - 1);
}
