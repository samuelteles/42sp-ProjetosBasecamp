/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svasconc <svasconc@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 20:12:04 by svasconc          #+#    #+#             */
/*   Updated: 2021/04/16 13:07:37 by svasconc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	count1;
	unsigned int	count2;

	count1 = 0;
	count2 = 0;
	while (dest[count1] != '\0')
		count1++;
	while (src[count2] && (count2 < nb))
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}
	dest[count1] = '\0';
	return (dest);
}
