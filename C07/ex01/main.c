/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:58:48 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 17:50:35 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	max;
	int	min;
	int	*range;
	int	i;

	max = 101;
	min = 100;
	i = 0;
	range = ft_range(min, max);
	printf("Range pointer = %p\n", range);
	while (i < (max - min))
	{
		printf("position i = %d\n", range[i]);
		i++;
	}
	free(range);
	return (1);
}
