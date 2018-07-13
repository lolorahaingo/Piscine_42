/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lrahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:48:50 by lrahaing          #+#    #+#             */
/*   Updated: 2018/07/12 18:56:23 by lrahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	print_hour(int first_param, int am_first_param, int second_param, int am_second_param)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN %i.00 ", first_param);
	if (am_first_param == 1)
		printf("A.M. AND ");
	else
		printf("P.M. AND ");
	printf("%i.00 ", second_param);
	if (am_second_param == 1)
		printf("A.M.\n");
	else
		printf("P.M.\n");
}

void	transform_param_am(int hour, int *first_param,
		int *second_param, int *am_second_param, int *am_first_param)
{
	*second_param = hour + 1;
	*first_param = hour;
	*am_first_param = 1;
	*am_second_param = 1;
	if (hour == 11)
		*am_second_param = 0;
	if (hour == 0)
		*first_param = 12;
}

void	transform_param_pm(int hour, int *first_param,
		int *second_param, int *am_second_param, int *am_first_param)
{
	*first_param = hour - 12;
	*second_param = hour - 12 + 1;
	*am_first_param = 0;
	*am_second_param = 0;
	if (hour == 23)
		*am_second_param = 1;
	if (hour == 12)
		*first_param = 12;
}


void	ft_takes_place(int hour)
{
	int first_param;
	int am_first_param;
	int second_param;
	int am_second_param;

	am_first_param = 0;
	am_second_param = 0;
	if (hour >= 0 && hour < 12) // AM
	{
		transform_param_am(hour, &first_param,
				&second_param, &am_second_param, &am_first_param);
	}
	else // PM
	{
		transform_param_pm(hour, &first_param,
				&second_param, &am_second_param, &am_first_param);
	}
	print_hour(first_param, am_first_param, second_param, am_second_param);
}

int	main(void)
{
	ft_takes_place(14);
}
