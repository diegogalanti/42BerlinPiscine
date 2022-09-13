/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:11:42 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 11:38:33 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	test;
	int	*test1;
	int	**test2;
	int	***test3;
	int	****test4;
	int	*****test5;
	int	******test6;
	int	*******test7;
	int	********test8;

	test = 21;
	test1 = &test;
	test2 = &test1;
	test3 = &test2;
	test4 = &test3;
	test5 = &test4;
	test6 = &test5;
	test7 = &test6;
	test8 = &test7;
	ft_ultimate_ft(&test8);
	printf("%d", test);
}
