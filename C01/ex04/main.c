/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:12:46 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 12:18:48 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 4;
	printf("Before div 'a'= %d 'b'= %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("After div 'a'= %d 'b'= %d\n", a, b);
}
