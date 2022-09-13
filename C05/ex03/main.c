/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:06:13 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 17:55:32 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	n;
	int	power;
	int	result;

	n = 0;
	power = 0;
	result = 0;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
	n = 0;
	power = 1;
	result = 0;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
	n = 1;
	power = 0;
	result = 0;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
	n = 1;
	power = -1;
	result = 0;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
	n = -2;
	power = 3;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
	n = 1;
	power = 10;
	result = ft_recursive_power(n, power);
	printf("with n = %d and power = %d, result = %d\n", n, power, result);
}
