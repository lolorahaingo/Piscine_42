/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 18:10:11 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:10:58 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    int size_dest;
    int size_src;
    
    size_dest = ft_strlen(dest) - 1;
    size_src = ft_strlen(src) - 1;
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    while (i < size_dest && size_src < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}
