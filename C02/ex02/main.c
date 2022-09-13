/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:40:34 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 13:22:15 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	a_c_a[10];
	char	not_a_c_[10];

	a_c_a[0] = 'a';
	a_c_a[1] = 'a';
	a_c_a[2] = 'a';
	a_c_a[3] = 'b';
	a_c_a[4] = 'b';
	a_c_a[5] = 66;
	a_c_a[6] = 'b';
	a_c_a[7] = 'a';
	a_c_a[8] = 'z';
	a_c_a[9] = 0;
	not_a_c_[0] = 'A';
	not_a_c_[1] = 'a';
	not_a_c_[2] = 'A';
	not_a_c_[3] = '1';
	not_a_c_[4] = 'z';
	not_a_c_[5] = 'A';
	not_a_c_[6] = 'A';
	not_a_c_[7] = 'd';
	not_a_c_[8] = 'z';
	not_a_c_[9] = 0;
	printf("Is array \"%s\" alpha?: %d\n", a_c_a, ft_str_is_alpha(a_c_a));
	printf("Is array \"%s\" alpha?: %d\n", not_a_c_, ft_str_is_alpha(not_a_c_));
}
