/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 11:25:02 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/17 11:34:41 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FT_STOCK_PAR_H
# define _FT_STOCK_PAR_H

# include <stdlib.h>
# include <unistd.h>

char				**ft_split_whitespaces(char *str);
struct s_stock_par	*ft_param_to_tab(int ac, char **av);
void				ft_show_tab(struct s_stock_par *par);

typedef struct		s_stock_par
{
	int				size_param;
	char			*str;
	char			*copy;
	char			**tab;
}					t_stock_par;

#endif
