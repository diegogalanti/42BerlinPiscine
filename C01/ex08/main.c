/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:14:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 16:18:13 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_number_array(int number[], int size)
{
	int	iterator;

	iterator = 0;
	while (iterator < size - 1)
	{
		printf("[%d] ", number[iterator]);
		iterator++;
	}
	printf("[%d]\n", number[size - 1]);
}

int	main(void)
{
	int	number[9];

	number[0] = 24;
	number[1] = 6;
	number[2] = 1;
	number[3] = 120;
	number[4] = 1;
	number[5] = 40320;
	number[6] = 720;
	number[7] = 2;
	number[8] = 5040;
	printf("Array before sort: \n");
	print_number_array(number, 9);
	ft_sort_int_tab(number, 9);
	printf("Array after sort: \n");
	print_number_array(number, 9);
}
