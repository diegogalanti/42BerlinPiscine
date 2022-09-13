/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:58:16 by ezakirov          #+#    #+#             */
/*   Updated: 2022/09/04 21:01:36 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

char	*concatenate(char *value, t_entry *dict_array, char *c, int size)
{
	char	*f;
	char	*s;
	char	*result;

	f = value;
	s = handle_one(dict_array, c[1], size);
	result = malloc(ft_strlen(f) + ft_strlen(s) + 2);
	result[0] = 0;
	ft_strcat(result, f);
	ft_strcat(result, "-");
	ft_strcat(result, s);
	return (result);
}

char	*handle_two(t_entry *d_array, char *c, int size)
{
	int	i;

	i = 0;
	if (c[0] == '0')
		return (handle_one(d_array, c[1], size));
	while (i < size)
	{
		if (ft_strlen(d_array[i].key) == 2)
		{
			if (c[0] == '1')
			{
				if (d_array[i].key[0] == c[0] && d_array[i].key[1] == c[1])
					return (d_array[i].value);
			}
			else if (d_array[i].key[0] == c[0])
			{
				if (c[1] == '0')
					return (d_array[i].value);
				else
					return (concatenate(d_array[i].value, d_array, c, size));
			}
		}
		i++;
	}
	return (0);
}
