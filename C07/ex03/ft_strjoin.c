/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:17 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 19:53:54 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*result_string;

	i = -1;
	len = 0;
	if (size <= 0)
	{
		result_string = malloc(1);
		result_string[0] = 0;
		return (result_string);
	}
	while (++i < size)
		len += ft_strlen(strs[i]);
	len += (size - 1) * ft_strlen(sep);
	result_string = malloc(len + 1);
	result_string[0] = 0;
	i = -1;
	while (++i < size)
	{
		ft_strcat(result_string, strs[i]);
		if (i < size - 1)
			ft_strcat(result_string, sep);
	}
	return (result_string);
}
