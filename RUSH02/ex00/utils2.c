/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:10:48 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 23:07:37 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*pos(t_entry *dict_array, char *c, int size)
{
	int	i;
	int	len;
	int	div;

	i = 0;
	len = ft_strlen(c);
	div = (len - 1) / 3;
	len = (div * 3) + 1;
	while (i < size)
	{
		if (ft_strlen(dict_array[i].key) == len)
			return (dict_array[i].value);
		i++;
	}
	return (0);
}
