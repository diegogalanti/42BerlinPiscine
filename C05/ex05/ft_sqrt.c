/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 19:35:48 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 20:29:52 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	nb = nb * ft_recursive_power(nb, power - 1);
	return (nb);
}

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	power;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	sqrt = 0;
	power = 0;
	while (sqrt <= 46340)
	{
		power = ft_recursive_power(++sqrt, 2);
		if (power == nb)
			return (sqrt);
		else if (sqrt > nb)
			return (0);
	}
	return (0);
}
