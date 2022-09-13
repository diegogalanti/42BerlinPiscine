/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 19:13:43 by digallar          #+#    #+#             */
/*   Updated: 2022/08/19 15:54:13 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temporary;

	temporary = *a;
	*a = *b;
	*b = temporary;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	iterator;

	iterator = 0;
	while (iterator < size / 2)
	{
		ft_swap(&tab[iterator], &tab[size - 1 - iterator]);
		iterator++;
	}
}
