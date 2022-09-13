/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:20:39 by digallar          #+#    #+#             */
/*   Updated: 2022/08/17 16:49:27 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	set_position(int positions[], int four, int three, int two)
{
	positions[3] = four;
	positions[2] = three;
	positions[1] = two;
}

void	init_vars(int positions[])
{
	positions[0] = 0;
	positions[1] = 0;
	positions[2] = 0;
	positions[3] = 1;
}

void	print_currents(char l[], char r[], int pos[])
{
	char	separator[2];
	char	space;

	separator[0] = 44;
	separator[1] = 32;
	space = 32;
	l[0] = pos[0] + 48;
	l[1] = pos[1] + 48;
	r[0] = pos[2] + 48;
	r[1] = pos[3] + 48;
	write(1, *&l, 2);
	write(1, &space, 1);
	write(1, *&r, 2);
	if ((pos[0] == 9) && (pos[1] == 8) && (pos[2] == 9) && (pos[3] == 9))
	{
	}
	else
	{
		write(1, &separator, 2);
	}
}

void	ft_print_comb2(void)
{
	char	curr_n_left[2];
	char	curr_n_right[2];
	int		pos[4];

	init_vars(pos);
	while (pos[0] <= 9)
	{
		while (pos[1] <= 9)
		{
			while (pos[2] <= 9)
			{
				while (pos[3] <= 9)
				{
					print_currents(curr_n_left, curr_n_right, pos);
					pos[3]++;
				}
				pos[2]++;
				set_position(pos, 0, pos[2], pos[1]);
			}
			pos[1]++;
			set_position(pos, pos[1] + 1, pos[0], pos[1]);
		}
		pos[0]++;
		set_position(pos, 1, pos[0], 0);
	}
}
