/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:53:11 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 17:38:00 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

static const char	g_min_int[] = {50, 49, 52, 55, 52, 56, 51, 54, 52, 56};

int	check_negative(int n)
{
	if (n < 0)
	{
		return (1);
	}
	return (0);
}

void	fill_with_null(char n_char[])
{
	n_char[0] = 0;
	n_char[1] = 0;
	n_char[2] = 0;
	n_char[3] = 0;
	n_char[4] = 0;
	n_char[5] = 0;
	n_char[6] = 0;
	n_char[7] = 0;
	n_char[8] = 0;
	n_char[9] = 0;
}

void	create_n_char( char n_char[], int n, int size)
{
	int	actual;
	int	counter;

	actual = n;
	counter = size;
	while (counter > 0)
	{
		counter--;
		n_char[counter] = (actual % 10) + 48;
		actual = actual / 10;
	}
}

int	check_size(int n)
{
	int	size;
	int	actual;

	size = 1;
	actual = n;
	while (actual >= 10)
	{
		size++;
		actual = actual / 10;
	}
	return (size);
}

void	ft_putnbr(int nb)
{
	int		is_negative;
	int		size;
	char	n_char[10];
	char	minus_sign;

	minus_sign = 45;
	fill_with_null(n_char);
	is_negative = check_negative(nb);
	if (is_negative)
	{
		write(1, &minus_sign, 1);
		if (nb == -2147483648)
		{
			write(1, &g_min_int, 10);
			return ;
		}
		else
		{
			nb = nb * -1;
		}
	}
	size = check_size(nb);
	create_n_char(n_char, nb, size);
	write(1, n_char, size);
}
