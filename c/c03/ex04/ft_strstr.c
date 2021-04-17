/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 00:11:05 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/16 14:06:01 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	count1;
	int	count2;

	count1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count1])
	{
		count2 = 0;
		while (str[count1 + count2] == to_find[count2])
		{
			if (to_find[count2 + 1] == '\0')
				return (&str[count1]);
			count2++;
		}
		count1++;
	}
	return (0);
}
