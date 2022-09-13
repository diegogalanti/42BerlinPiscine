/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:33:17 by digallar          #+#    #+#             */
/*   Updated: 2022/08/31 17:21:57 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_numeric(char str)
{
	if (str < 48 || str > 57)
	{
		return (0);
	}
	return (1);
}

int	ft_get_first_pos(char *str)
{
	int	iterator;

	iterator = 0;
	while (!ft_char_is_numeric(str[iterator]))
		iterator++;
	return (iterator);
}

int	is_valid(char *str)
{
	int	i;

	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
		i++;
	if (ft_char_is_numeric(str[i]))
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

int	ft_atoi(char *str)
{
	int	positive;
	int	first_pos;
	int	result;

	result = 0;
	if (is_valid(str))
	{
		positive = is_positive(str);
		first_pos = ft_get_first_pos(str);
		while (ft_char_is_numeric(str[first_pos]))
		{
			result = (result * 10) + (str[first_pos] - 48);
			first_pos++;
		}
		if (!positive)
			result = result * -1;
	}
	return (result);
}
