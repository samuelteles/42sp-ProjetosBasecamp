/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 16:41:09 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/15 01:52:29 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count])
	{
		if (s1[count] == '\0' && s2[count] == '\0')
			return (0);
		count++;
	}
	return ((unsigned char)s1[count] - (unsigned char)s2[count]);
}
