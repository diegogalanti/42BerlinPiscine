/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:12:25 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 12:10:46 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	printf("Before div 'a'= %d 'b'= %d 'div'= %d 'mod'= %d\n", a, b, div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("After div 'a'= %d 'b'= %d 'div'= %d 'mod'= %d\n", a, b, div, mod);
}
