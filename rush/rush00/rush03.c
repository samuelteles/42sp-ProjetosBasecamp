/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 20:36:21 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/04 01:07:04 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush03(int x, int y)
{
	int		cont1;
	int		cont2;

	cont1 = 0;
	cont2 = 0;
	while (cont2++ < y)
	{
		while (cont1++ < x)
		{
			if (cont2 == 1 || cont2 == y)
			{
				if (cont1 == 1)
					ft_putchar('A');
				else if (cont1 > 1 && cont1 < x)
					ft_putchar('B');
				else
					ft_putchar('C');
			}
			else
				ft_putchar(cont1 == 1 || cont1 == x ? 'B' : ' ');
		}
		write(1, "\n", 1);
		cont1 = 0;
	}
}
