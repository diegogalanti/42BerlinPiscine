/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:42:21 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 08:57:51 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
		size++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	iterator;

	iterator = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[iterator] != '\0' && iterator < size - 1)
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	if (size > 0)
		dest[iterator] = '\0';
	return (ft_strlen(src));
}
