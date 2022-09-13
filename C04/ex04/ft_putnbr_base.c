/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:12:38 by digallar          #+#    #+#             */
/*   Updated: 2022/08/31 18:36:14 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	have_duplicates(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_base_valid(char *base)
{
	int	i;
	int	base_lengh;

	base_lengh = 0;
	i = -1;
	while (base[base_lengh] != '\0')
		base_lengh++;
	if (base_lengh < 2)
		return (0);
	while (base[++i] != 0)
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
	}
	i = -1;
	if (have_duplicates(base, base_lengh))
		return (0);
	while (base[++i + 1] != 0)
	{
		if (base[i] == base[i + 1])
			return (0);
	}
	return (1);
}

void	convert_long_to_base_array(long long_nbr, char base[], int base_nbr)
{
	char	current;

	if (long_nbr >= base_nbr)
		convert_long_to_base_array(long_nbr / base_nbr, base, base_nbr);
	current = base[long_nbr % base_nbr];
	write(1, &current, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	long	long_nbr;
	char	minus_sign;

	minus_sign = '-';
	long_nbr = (long) nbr;
	if (!is_base_valid(base))
		return ;
	base_nbr = 0;
	while (base[base_nbr] != '\0')
		base_nbr++;
	if (long_nbr < 0)
	{
		long_nbr *= -1;
		write(1, &minus_sign, 1);
	}
	convert_long_to_base_array(long_nbr, base, base_nbr);
}
