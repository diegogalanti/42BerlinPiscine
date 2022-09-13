/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:48:55 by digallar          #+#    #+#             */
/*   Updated: 2022/08/18 16:45:25 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	start_n_array(int n_array[], int size, int columns)
{
	int	contador;

	contador = size - 1;
	while (contador >= 0)
	{
		n_array[contador] = 0;
		contador--;
	}
	contador = columns - 1;
	while (contador >= 0)
	{
		n_array[contador] = contador;
		contador--;
	}
}

void	print_n_array(int n_array[], int size)
{
	char	n_char[10];
	int		contador;
	int		max;

	max = 9;
	while (max >= 0)
	{
		n_char[max] = 0;
		max--;
	}
	contador = size - 1;
	while (contador >= 0)
	{
		n_char[contador] = n_array[contador] + 48;
		contador--;
	}
	write(1, &n_char, size);
}

int	adjust_next_sequence(int n_array[], int size)
{
	int	iterator;

	iterator = size - 2;
	while (iterator >= 0)
	{
		if (n_array[iterator] < (10 - size + iterator))
		{
			n_array[iterator]++;
			while (iterator < (size - 1))
			{
				iterator++;
				n_array[iterator] = n_array[iterator - 1] + 1;
			}
			return (1);
		}
		iterator--;
	}
	return (0);
}

void	print_based_colunms(int n_array[], int size)
{
	int		cont;
	char	separator[2];

	separator[0] = 44;
	separator[1] = 32;
	cont = 1;
	while (cont == 1)
	{
		while (n_array[size - 1] <= 9)
		{
			print_n_array(n_array, size);
			n_array[size - 1]++;
			if (n_array[size - 1] != 10)
			{
				write(1, &separator, 2);
			}
		}
		cont = adjust_next_sequence(n_array, size);
		if (cont == 1)
		{
			write(1, &separator, 2);
		}
	}	
}

void	ft_print_combn(int n)
{
	int		columns;
	int		n_array[10];

	columns = n;
	start_n_array(n_array, 10, columns);
	print_based_colunms(n_array, columns);
}
