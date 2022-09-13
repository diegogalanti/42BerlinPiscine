/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:06:13 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 11:11:48 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	n;
	int	factorial;

	n = 0;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
	n = 1;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
	n = 2;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
	n = 3;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
	n = -1;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
	n = 9;
	factorial = 0;
	factorial = ft_recursive_factorial(n);
	printf("with n = %d factorial is = %d\n", n, factorial);
}
