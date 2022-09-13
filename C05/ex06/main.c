/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:31:15 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 20:38:50 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb);

int	main(void)
{
	int	n;
	int	result;

	n = -1;
	printf("For number = %d prime = %d\n", n, ft_is_prime(n));
	n = 0;
	printf("For number = %d prime = %d\n", n, ft_is_prime(n));
	n = 1;
	printf("For number = %d prime = %d\n", n, ft_is_prime(n));
	n = 2147483647;
	printf("For number = %d prime = %d\n", n, ft_is_prime(n));
	while (--n >= 0)
	{
		result = ft_is_prime(n);
		if (result != 0)
			printf("Number = %d is prime!\n", n);
	}
}
