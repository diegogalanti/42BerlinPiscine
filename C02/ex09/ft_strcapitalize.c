/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:27:03 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 17:16:35 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_up_char(char c)
{
	if (c > 64 && c < 91)
		return (1);
	return (0);
}

int	is_low_char(char c)
{
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

int	is_alpha_numeric_char(char c)
{
	int	is_alpha;
	int	is_numeric;

	is_alpha = 0;
	is_numeric = 0;
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		is_alpha = 1;
	if (c > 47 && c < 58)
		is_numeric = 1;
	return (is_alpha || is_numeric);
}

int	is_space_char(char c)
{
	if (c == 32 || c == 43 || c == 45)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char str[])
{
	unsigned int		iterator;
	int					found;
	int					is_alpha_numeric;

	iterator = 0;
	found = 0;
	while (str[iterator] != '\0')
	{
		is_alpha_numeric = is_alpha_numeric_char(str[iterator]);
		if (!found && is_alpha_numeric)
		{
			found = 1;
			if (is_low_char(str[iterator]))
				str[iterator] -= 32;
		}
		else if (is_alpha_numeric && is_up_char(str[iterator]))
			str[iterator] = str[iterator] + 32;
		else if (!is_alpha_numeric)
			found = 0;
		iterator++;
	}
	return (str);
}
