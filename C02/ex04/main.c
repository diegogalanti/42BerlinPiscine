/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:40:34 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 14:31:06 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	i_a_l[10];
	char	n_a_l[10];

	i_a_l[0] = 'a';
	i_a_l[1] = 'b';
	i_a_l[2] = 'c';
	i_a_l[3] = 'd';
	i_a_l[4] = 'e';
	i_a_l[5] = 'f';
	i_a_l[6] = 'g';
	i_a_l[7] = 'h';
	i_a_l[8] = 'i';
	i_a_l[9] = 0;
	n_a_l[0] = 'A';
	n_a_l[1] = 'a';
	n_a_l[2] = 'b';
	n_a_l[3] = 'c';
	n_a_l[4] = 'd';
	n_a_l[5] = 'e';
	n_a_l[6] = 'f';
	n_a_l[7] = 'g';
	n_a_l[8] = 'h';
	n_a_l[9] = 0;
	printf("Is array \"%s\" lc?: %d\n", i_a_l, ft_str_is_lowercase(i_a_l));
	printf("Is array \"%s\" lc?: %d\n", n_a_l, ft_str_is_lowercase(n_a_l));
}
