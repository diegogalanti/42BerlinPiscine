/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:31:15 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 15:45:24 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	n;

	n = -1;
	printf("For number = %d next prime = %d\n", n, ft_find_next_prime(n));
	n = 0;
	printf("For number = %d next prime = %d\n", n, ft_find_next_prime(n));
	n = 1;
	printf("For number = %d next prime = %d\n", n, ft_find_next_prime(n));
	while (++n <1000000)
	{
		printf("For number = %d next prime = %d\n", n, ft_find_next_prime(n));
	}
}
