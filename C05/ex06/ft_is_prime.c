/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 20:31:15 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 09:57:09 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	iterator;

	iterator = 2;
	if (nb < 2)
		return (0);
	while (iterator <= nb / 2)
	{
		if ((nb % iterator) == 0)
			return (0);
		iterator++;
	}
	return (1);
}
