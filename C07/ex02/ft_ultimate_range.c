/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:02 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 18:26:46 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*temp;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = malloc((max - min) * 8);
	if (temp == NULL)
	{
		return (-1);
	}
	while (i < (max - min))
	{
		temp[i] = min + i;
		i++;
	}
	*range = temp;
	return (max - min);
}
