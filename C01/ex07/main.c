/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:13:43 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 15:54:18 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

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

	number[0] = 0;
	number[1] = 1;
	number[2] = 1;
	number[3] = 2;
	number[4] = 3;
	number[5] = 5;
	number[6] = 8;
	number[7] = 13;
	number[8] = 21;
	printf("Array before: \n");
	print_number_array(number, 9);
	ft_rev_int_tab(number, 9);
	printf("Array after: \n");
	print_number_array(number, 9);
}
