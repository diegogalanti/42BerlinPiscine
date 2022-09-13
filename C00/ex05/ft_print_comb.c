/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:07:15 by digallar          #+#    #+#             */
/*   Updated: 2022/08/18 14:07:58 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	init_vars(int *pos_one, int *pos_two, int *pos_three)
{
	*pos_one = 0;
	*pos_two = 1;
	*pos_three = 2;
}

void	print_current(char current_number[], int *one, int *two, int *three)
{
	char	separator[2];

	separator[0] = 44;
	separator[1] = 32;
	current_number[0] = *one + 48;
	current_number[1] = *two + 48;
	current_number[2] = *three + 48;
	write(1, *&current_number, 3);
	if (*one == 7)
	{
	}
	else
	{
		write(1, &separator, 2);
	}	
}

void	ft_print_comb(void)
{
	char	current_number[3];
	int		pos_one;
	int		pos_two;
	int		pos_three;

	init_vars(&pos_one, &pos_two, &pos_three);
	while (pos_one <= 7)
	{
		while (pos_two <= 8)
		{
			while (pos_three <= 9)
			{
				print_current(current_number, &pos_one, &pos_two, &pos_three);
				pos_three++;
			}
			pos_two++;
			pos_three = pos_two + 1;
		}
		pos_one++;
		pos_two = pos_one + 1;
		pos_three = pos_two + 1;
	}
}
