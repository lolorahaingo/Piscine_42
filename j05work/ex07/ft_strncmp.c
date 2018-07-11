/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 23:21:58 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/10 15:12:38 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	while (s1[i] == s2[i] && i < n - 1)
		i++;
	if (s1[i] == s2[i])
		return (0);
	else
		return (s1[i] - s2[i]);
}
