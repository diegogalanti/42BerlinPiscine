/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 15:54:02 by ezakirov          #+#    #+#             */
/*   Updated: 2022/09/04 19:55:25 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

void	clean(t_entry *space, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(space[i].key);
		free(space[i].value);
		i++;
	}
	free(space);
}
