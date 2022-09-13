/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:18:55 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 13:25:13 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	a_n_a[10];
	char	not_n_c_[10];

	a_n_a[0] = '1';
	a_n_a[1] = '2';
	a_n_a[2] = '3';
	a_n_a[3] = '4';
	a_n_a[4] = '5';
	a_n_a[5] = '6';
	a_n_a[6] = '7';
	a_n_a[7] = '8';
	a_n_a[8] = '9';
	a_n_a[9] = 0;
	not_n_c_[0] = '1';
	not_n_c_[1] = '2';
	not_n_c_[2] = '3';
	not_n_c_[3] = '4';
	not_n_c_[4] = '5';
	not_n_c_[5] = '6';
	not_n_c_[6] = '7';
	not_n_c_[7] = '8';
	not_n_c_[8] = 'a';
	not_n_c_[9] = 0;
	printf("Is ar \"%s\" num?: %d\n", a_n_a, ft_str_is_numeric(a_n_a));
	printf("Is ar \"%s\" num?: %d\n", not_n_c_, ft_str_is_numeric(not_n_c_));
}
