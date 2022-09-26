/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:27:46 by digallar          #+#    #+#             */
/*   Updated: 2022/09/26 11:37:49 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	create_n_char( char n_char[], int n, int size)
{
	int	actual;

	actual = n;
	n_char[size] = 0;
	while (size > 0)
	{
		size--;
		n_char[size] = (actual % 10) + 48;
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
	int		size;
	char	n_char[10];

	size = check_size(nb);
	create_n_char(n_char, nb, size);
	write(1, n_char, size);
}

void	ft_putstr(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
		size++;
	}
	write(1, str, size);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
