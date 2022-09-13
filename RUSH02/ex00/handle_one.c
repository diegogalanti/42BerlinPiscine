/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_one.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 11:10:45 by ezakirov          #+#    #+#             */
/*   Updated: 2022/09/04 20:40:20 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

char	*handle_one(t_entry *dict_array, char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (ft_strlen(dict_array[i].key) == 1)
		{
			if (dict_array[i].key[0] == c)
				return (dict_array[i].value);
			i++;
		}
	}
	return (0);
}
