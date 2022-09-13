/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:40:34 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 14:33:04 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	i_a_l[10];
	char	n_a_l[10];

	i_a_l[0] = 'A';
	i_a_l[1] = 'B';
	i_a_l[2] = 'C';
	i_a_l[3] = 'D';
	i_a_l[4] = 'E';
	i_a_l[5] = 'F';
	i_a_l[6] = 'G';
	i_a_l[7] = 'H';
	i_a_l[8] = 'I';
	i_a_l[9] = 0;
	n_a_l[0] = 'A';
	n_a_l[1] = 'B';
	n_a_l[2] = 'C';
	n_a_l[3] = 'D';
	n_a_l[4] = 'E';
	n_a_l[5] = 'F';
	n_a_l[6] = 'G';
	n_a_l[7] = 'H';
	n_a_l[8] = 'i';
	n_a_l[9] = 0;
	printf("Is array \"%s\" uc?: %d\n", i_a_l, ft_str_is_uppercase(i_a_l));
	printf("Is array \"%s\" uc?: %d\n", n_a_l, ft_str_is_uppercase(n_a_l));
}
