/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:44 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 17:47:41 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		iterator;

	iterator = 0;
	while (src[iterator] != '\0')
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	dest[iterator] = '\0';
	return (dest);
}
