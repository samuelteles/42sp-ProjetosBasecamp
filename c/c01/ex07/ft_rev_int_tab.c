/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 18:32:38 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/11 18:50:53 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int tmp;

	count = 0;
	while (count < (size / 2))
	{
		tmp = tab[count];
		tab[count] = tab[size - 1 - count];
		tab[size - 1 - count] = tmp;
		count++;
	}
}
