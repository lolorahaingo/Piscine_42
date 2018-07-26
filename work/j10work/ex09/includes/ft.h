/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 23:13:42 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/20 16:00:11 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_swap(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
int		is_correct(int argc, char **argv);
int		calculate(int first_number, char *op, int second_number);
int		ft_sub(int i, int j);
int		ft_add(int i, int j);
int		ft_mul(int i, int j);
int		ft_div(int i, int j);
int		ft_mod(int i, int j);
int		ft_usage(int i, int j);

typedef struct	s_opp
{
	char *op;
	int (*operation)(int, int);
}				t_opp;

#include "ft_opp.h"

#endif
