/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 19:47:43 by digallar          #+#    #+#             */
/*   Updated: 2022/09/02 10:44:27 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_base_valid(char *base);

int	get_pos(char str, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (str == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_get_first_pos(char *str, char *base)
{
	int	iterator;

	iterator = 0;
	while (get_pos(str[iterator], base) < 0)
		iterator++;
	return (iterator);
}

int	is_valid(char *str, char *base)
{
	int	i;

	i = 0;
	if (!is_base_valid(base))
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if (get_pos(str[i], base) >= 0)
		return (1);
	return (0);
}

int	is_positive(char *str)
{
	int	i;
	int	positive;

	positive = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			positive *= -1;
		i++;
	}
	if (positive == -1)
		return (0);
	return (positive);
}

int	ft_atoi_base(char *str, char *base, int *error)
{
	int	positive;
	int	first_pos;
	int	result;
	int	base_nbr;

	result = 0;
	if (is_valid(str, base))
	{	
		positive = is_positive(str);
		first_pos = ft_get_first_pos(str, base);
		base_nbr = 0;
		while (base[base_nbr] != '\0')
			base_nbr++;
		while (get_pos(str[first_pos], base) >= 0)
		{
			result = (result * base_nbr) + get_pos(str[first_pos], base);
			first_pos++;
		}
		if (!positive)
			result = result * -1;
	}
	else
		*error = 1;
	return (result);
}
