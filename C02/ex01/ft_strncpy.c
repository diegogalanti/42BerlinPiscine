/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:44 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 13:01:40 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		iterator;

	iterator = 0;
	while (src[iterator] != '\0' && iterator < n)
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}
