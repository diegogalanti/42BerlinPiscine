/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_three.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:32:42 by ezakirov          #+#    #+#             */
/*   Updated: 2022/09/04 21:57:52 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

char	*conc_one(char *value, t_entry *dict_array, char *c, int size)
{
	char	*f;
	char	*s;
	char	*result;

	f = handle_one(dict_array, c[0], size);
	s = value;
	result = malloc(ft_strlen(f) + ft_strlen(s) + 2);
	result[0] = 0;
	ft_strcat(result, f);
	ft_strcat(result, " ");
	ft_strcat(result, s);
	return (result);
}

char	*conc_one_one(char *value, t_entry *dict_array, char *c, int size)
{
	char	*f;
	char	*s;
	char	*result;
	char	*t;

	f = handle_one(dict_array, c[0], size);
	s = value;
	t = handle_one(dict_array, c[2], size);
	result = malloc(ft_strlen(f) + ft_strlen(s) + ft_strlen(t) + 7);
	result[0] = 0;
	ft_strcat(result, f);
	ft_strcat(result, " ");
	ft_strcat(result, s);
	ft_strcat(result, " and ");
	ft_strcat(result, t);
	return (result);
}

char	*conc_two(char *value, t_entry *dict_array, char *c, int size)
{
	char	*f;
	char	*s;
	char	*result;
	char	*t;

	f = handle_one(dict_array, c[0], size);
	s = value;
	t = handle_two(dict_array, &c[1], size);
	result = malloc(ft_strlen(f) + ft_strlen(s) + ft_strlen(t) + 7);
	result[0] = 0;
	ft_strcat(result, f);
	ft_strcat(result, " ");
	ft_strcat(result, s);
	ft_strcat(result, " and ");
	ft_strcat(result, t);
	return (result);
}

char	*handle_three(t_entry *d_array, char *c, int size)
{
	int	i;

	i = 0;
	if (c[0] == '0' && c[1] == '0' && c[2] == '0')
		return (malloc(0));
	else if (c[0] == '0')
		return (handle_two(d_array, &c[1], size));
	while (i < size)
	{
		if (ft_strlen(d_array[i].key) == 3 && c[0] != '0')
		{
			if (c[1] == '0' && c[2] == '0')
				return (conc_one(d_array[i].value, d_array, c, size));
			else if (c[1] == '0')
				return (conc_one_one(d_array[i].value, d_array, c, size));
			else
				return (conc_two(d_array[i].value, d_array, c, size));
		}
		i++;
	}
	return (0);
}
