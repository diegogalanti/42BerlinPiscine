/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:12:38 by digallar          #+#    #+#             */
/*   Updated: 2022/09/02 10:44:26 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_atoi_base(char *str, char *base, int *error);

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

char	*c_l_t_b_a(long long_nbr, char base[], int base_nbr, int is_negative)
{
	int		size;
	long	copy;
	char	*result_buffer;
	int		i;

	size = 1;
	copy = long_nbr;
	while (copy >= base_nbr)
	{
		copy = copy / base_nbr;
		size++;
	}
	result_buffer = malloc(size + 1 + is_negative);
	result_buffer[size + is_negative] = 0;
	i = -1;
	if (is_negative)
		result_buffer[0] = '-';
	while (++i < size)
	{
		result_buffer[size - 1 - i + is_negative] = base[long_nbr % base_nbr];
		long_nbr = long_nbr / base_nbr;
	}
	return (result_buffer);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int		base_nbr;
	long	long_nbr;
	char	minus_sign;

	minus_sign = '-';
	long_nbr = (long) nbr;
	if (!is_base_valid(base))
		return (0);
	base_nbr = 0;
	while (base[base_nbr] != '\0')
		base_nbr++;
	if (long_nbr < 0)
	{
		long_nbr *= -1;
		return (c_l_t_b_a(long_nbr, base, base_nbr, 1));
	}
	return (c_l_t_b_a(long_nbr, base, base_nbr, 0));
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nbr_int;
	char	*result;
	int		error;

	error = 0;
	nbr_int = ft_atoi_base(nbr, base_from, &error);
	if (error)
		return (0);
	result = ft_putnbr_base(nbr_int, base_to);
	return (result);
}
