/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:14:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 16:18:36 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	iterator;
	int	cont;

	cont = 1;
	while (cont == 1)
	{
		iterator = 0;
		cont = 0;
		while (iterator < size - 1)
		{
			if (tab[iterator] > tab[iterator + 1])
			{
				ft_swap(&tab[iterator], &tab[iterator + 1]);
				cont = 1;
			}
			iterator++;
		}
	}
}
