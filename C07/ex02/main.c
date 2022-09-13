/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:02 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 18:26:25 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	max;
	int	min;
	int	*range;
	int	i;
	int	result;

	max = 150;
	min = 150;
	i = 0;
	result = ft_ultimate_range(&range, min, max);
	printf("Range pointer = %p\n", range);
	printf("Return = %d\n", result);
	while (i < (max - min))
	{
		printf("position i = %d\n", range[i]);
		i++;
	}
	free(range);
	return (1);
}
