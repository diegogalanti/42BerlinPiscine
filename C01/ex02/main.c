/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:40:55 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 12:03:54 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 21;
	b = 42;
	printf("Original 'a' = %d and Original 'b' = %d\n", a, b);
	ft_swap(&a, &b);
	printf("Swaped 'a' = %d and Original 'b' = %d", a, b);
}
