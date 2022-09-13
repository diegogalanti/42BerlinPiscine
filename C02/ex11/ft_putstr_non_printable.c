/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:51:26 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 17:35:03 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
		size++;
	}
	return (size);
}

int	ft_char_is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

char	get_hex_char(char n)
{
	if (n <= 9)
		return (n + 48);
	else if (n == 10)
		return ('a');
	else if (n == 11)
		return ('b');
	else if (n == 12)
		return ('c');
	else if (n == 13)
		return ('d');
	else if (n == 14)
		return ('e');
	else if (n == 15)
		return ('f');
	return (0);
}

void	print_hex(unsigned char c)
{
	char	backslash;
	char	fp;
	char	sp;

	backslash = 92;
	fp = get_hex_char(c / 16);
	sp = get_hex_char(c % 16);
	write(1, &backslash, 1);
	write(1, &fp, 1);
	write(1, &sp, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = ft_strlen(str);
	while (iterator < size)
	{
		if (ft_char_is_printable(str[iterator]))
		{
			write(1, &str[iterator], 1);
		}
		else
		{
			print_hex((unsigned char)str[iterator]);
		}
		iterator++;
	}
}
