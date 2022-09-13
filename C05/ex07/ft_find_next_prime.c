/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:42:54 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 15:44:37 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	iterator;

	iterator = 11;
	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3 || nb == 5 || nb == 7)
		return (1);
	if ((nb % 2) == 0 || (nb % 3) == 0 || (nb % 5) == 0 || (nb % 7) == 0)
		return (0);
	while (iterator <= nb / 11)
	{
		if ((nb % iterator) == 0)
			return (0);
		iterator += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb) && nb <= 2147483647)
	{
		nb++;
	}
	return (nb);
}
