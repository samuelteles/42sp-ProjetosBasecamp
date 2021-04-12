/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:39:05 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/08 21:38:07 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char ten1, char unit1, char ten2, char unit2)
{
	if (ten1 == 57 && unit1 == 56 && ten2 == 57 && unit2 == 57)
	{
		write(1, &ten1, 1);
		write(1, &unit1, 1);
		write(1, " ", 1);
		write(1, &ten2, 1);
		write(1, &unit2, 1);
	}
	else
	{
		write(1, &ten1, 1);
		write(1, &unit1, 1);
		write(1, " ", 1);
		write(1, &ten2, 1);
		write(1, &unit2, 1);
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	ft_next_num(char ten1, char unit1)
{
	char	ten2;
	char	unit2;

	ten2 = ten1;
	while (ten2 <= 57)
	{
		if (ten2 == ten1)
		{
			unit2 = unit1 + 1;
		}
		else
		{
			unit2 = 48;
		}
		while (unit2 <= 57)
		{
			ft_print_num(ten1, unit1, ten2, unit2);
			unit2++;
		}
		ten2++;
	}
}

void	ft_print_comb2(void)
{
	char	ten1;
	char	unit1;

	ten1 = 48;
	while (ten1 <= 57)
	{
		unit1 = 48;
		while (unit1 <= 57)
		{
			ft_next_num(ten1, unit1);
			unit1++;
		}
		ten1++;
	}
}
