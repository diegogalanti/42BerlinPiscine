/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:58:32 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 17:23:21 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
	}
	return (iterator);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = ft_strlen(src);
	copy = malloc((len + 1) * 4);
	while (len >= 0)
	{
		copy[len] = src[len];
		len--;
	}
	return (copy);
}
