/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:23:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/24 17:29:19 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_last;
	int	i;

	dest_last = 0;
	i = 0;
	while (dest[i] != 0)
	{
		i++;
		dest_last++;
	}
	i = 0;
	while (src[i] != 0)
	{
		dest[dest_last + i] = src[i];
		i++;
	}
	dest[dest_last + i] = 0;
	return (dest);
}
