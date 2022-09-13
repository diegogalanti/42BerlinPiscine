/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 11:06:13 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 09:45:14 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int index);

int	main(void)
{
	int	n;
	int	result;

	n = -1;
	printf("Square of number = %d is = %d\n", n, ft_sqrt(n));
	n = 5;
	printf("Square of number = %d is = %d\n", n, ft_sqrt(n));
	n = 2147395600;
	printf("Square of number = %d is = %d\n", n, ft_sqrt(n));
	n = 0;
	while (++n < 2147483647)
	{
		result = ft_sqrt(n);
		if (result != 0)
			printf("Square of number = %d is = %d\n", n, result);
	}
}
