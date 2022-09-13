/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:49:11 by digallar          #+#    #+#             */
/*   Updated: 2022/08/17 22:30:34 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_combn(int n);

int	main(void)
{
	char	eol[2];

	eol[0] = '\n';
	eol[1] = '\n';
	ft_print_combn(1);
	write(1, &eol, 2);
	ft_print_combn(2);
	write(1, &eol, 2);
	ft_print_combn(3);
	write(1, &eol, 2);
	ft_print_combn(4);
	write(1, &eol, 2);
	ft_print_combn(5);
	write(1, &eol, 2);
	ft_print_combn(6);
	write(1, &eol, 2);
	ft_print_combn(7);
	write(1, &eol, 2);
	ft_print_combn(8);
	write(1, &eol, 2);
	ft_print_combn(9);
	write(1, &eol, 2);
	ft_print_combn(10);
	return (0);
}
