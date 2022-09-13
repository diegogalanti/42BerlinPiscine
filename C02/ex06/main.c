/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:40:34 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 14:48:58 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	n_a_l[10];
	char	n_a_p[10];

	n_a_l[0] = 'A';
	n_a_l[1] = 'B';
	n_a_l[2] = 'C';
	n_a_l[3] = 'D';
	n_a_l[4] = 'E';
	n_a_l[5] = 'F';
	n_a_l[6] = 'G';
	n_a_l[7] = 'H';
	n_a_l[8] = 'I';
	n_a_l[9] = 0;
	n_a_p[0] = 'A';
	n_a_p[1] = 'B';
	n_a_p[2] = 'C';
	n_a_p[3] = 'D';
	n_a_p[4] = 2;
	n_a_p[5] = 'F';
	n_a_p[6] = 'G';
	n_a_p[7] = 'H';
	n_a_p[8] = 'i';
	n_a_p[9] = 0;
	printf("Is array \"%s\" print?: %d\n", n_a_l, ft_str_is_printable(n_a_l));
	printf("Is array \"%s\" print?: %d\n", n_a_p, ft_str_is_printable(n_a_p));
}
