/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 02:08:55 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/16 13:04:26 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int count1;
	unsigned int count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2])
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}
	dest[count1] = '\0';
	return (dest);
}
