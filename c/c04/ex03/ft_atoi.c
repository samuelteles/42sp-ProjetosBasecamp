/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 18:34:22 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/17 00:08:37 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int number;
	int sign;

	number = 0;
	sign = 1;
	while ((*str == ' ') || (*str == '\t') || (*str == '\n') || (*str == '\v')
	|| (*str == '\f') || (*str == '\r'))
		str++;
	while (*str == '-' || (*str == '+'))
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		number *= 10;
		number += *str - '0';
		str++;
	}
	return (sign * number);
}
