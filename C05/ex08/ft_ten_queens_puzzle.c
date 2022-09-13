/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:48:51 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 14:00:05 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

static int	g_final_result = 0;

void	start_table(char (*table)[10], int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
	{
		while (j < size)
		{
			table[i][j] = 3;
			j++;
		}
		i++;
		j = 0;
	}
}

int	put_queen(char (*table)[10], int size, int line, int col)
{
	int	i;
	int	j;

	i = 0;
	if (table[line][col] == 1 || table[line][col] == 2)
		return (0);
	while (i < size)
		table[line][i++] = 2;
	i = 0;
	while (i < size)
		table[i++][col] = 2;
	i = line + 1;
	j = col;
	while (--i > 0 && j > 0)
		j--;
	while (i < size && j++ < size)
		table[i++][j - 1] = 2;
	i = line + 1;
	j = col;
	while (--i > 0 && j < size)
		j++;
	while (i < size && j-- >= 0)
		table[i++][j + 1] = 2;
	table[line][col] = 1;
	return (1);
}

char	*convert_long_to_array(long long_nbr, char buffer[], int size)
{
	buffer[size - 1] = (long_nbr % 10) + 48;
	if (size > 1)
		convert_long_to_array(long_nbr / 10, buffer, size - 1);
	return (buffer);
}

void	solve(char try[], char (*table)[10], long next, int *div)
{
	int	i;
	int	count;

	while (next++ <= 9742051863)
	{
		count = 0;
		i = -1;
		while (++i < 10 && count == i)
			count += put_queen(table, 10, i, try[i] - 48);
		if (count == 10)
		{
			write(1, try, 10 + 1);
			g_final_result++;
		}
		else
		{
			i = -1;
			*div = 10;
			while (++i < count - 2)
				*div = *div * 10;
			next = next + (100000000 / *div) - 1;
		}
		start_table(table, 10);
		convert_long_to_array(next, try, 10);
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	table[10][10];
	int		size;
	long	first_try;
	char	try_buffer[11];
	int		div;

	first_try = 257948136;
	size = 10;
	div = 10;
	start_table(table, size);
	try_buffer[10] = '\n';
	convert_long_to_array(first_try, try_buffer, size);
	solve(try_buffer, table, first_try, &div);
	return (g_final_result);
}
