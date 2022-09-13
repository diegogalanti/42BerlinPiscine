/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:51:48 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 17:37:57 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putnbr(int nb);

int	main(void)
{
	char	eol;

	eol = '\n';
	ft_putnbr(0);
	write(1, &eol, 1);
	ft_putnbr(1);
	write(1, &eol, 1);
	ft_putnbr(11111111);
	write(1, &eol, 1);
	ft_putnbr(111111111);
	write(1, &eol, 1);
	ft_putnbr(2147483647);
	write(1, &eol, 1);
	ft_putnbr(-2147483648);
	write(1, &eol, 1);
	ft_putnbr(-1);
	return (0);
}
