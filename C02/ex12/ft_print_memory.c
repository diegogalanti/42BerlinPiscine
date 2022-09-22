/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:57:06 by digallar          #+#    #+#             */
/*   Updated: 2022/09/22 15:32:39 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	write_char_array(char *array, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if ((unsigned char)array[i] < 32 || (unsigned char)array[i] > 126)
			array[i] = 46;
		write(1, &array[i], 1);
		i++;
	}
}

void	convert_long_to_hex_array(long long_nbr, char buffer[], int size)
{
	buffer[size - 1] = "0123456789abcdef"[long_nbr % 16];
	if (size > 1)
		convert_long_to_hex_array(long_nbr / 16, buffer, size - 1);
}

void	convert_charsarray_to_hex(char *array, char buf[], int size, int rem)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (j < size - 1)
	{
		if (rem-- == 0)
			return ;
		buf[++j] = "0123456789abcdef"[((unsigned char)array[i]) / 16];
		buf[++j] = "0123456789abcdef"[((unsigned int)array[i++]) % 16];
		if (rem-- == 0)
			return ;
		buf[++j] = "0123456789abcdef"[((unsigned char)array[i]) / 16];
		buf[++j] = "0123456789abcdef"[((unsigned int)array[i++]) % 16];
		j++;
	}
}

void	print_line(char *address, int remaining)
{
	char	buffer_hex[17];
	char	buffer_hex_positions[41];
	long	address_long;
	int		iterator;

	iterator = 0;
	address_long = (long)address;
	buffer_hex[16] = 0;
	convert_long_to_hex_array(address_long, buffer_hex, 16);
	write_char_array(buffer_hex, 16);
	write_char_array(": ", 2);
	while (iterator < 40)
	{
		buffer_hex_positions[iterator] = 32;
		iterator++;
	}
	buffer_hex_positions[40] = 0;
	convert_charsarray_to_hex(address, buffer_hex_positions, 40, remaining);
	write_char_array(buffer_hex_positions, 40);
	if (remaining >= 16)
		write_char_array(address, 16);
	else
		write_char_array(address, remaining);
}

void	*ft_print_memory(void *addr, int size)
{
	int		iterator;
	char	*address;
	char	nl;

	address = addr;
	iterator = 0;
	nl = '\n';
	while (iterator < size)
	{
		print_line(address + iterator, size - iterator);
		iterator += 16;
		write(1, &nl, 1);
	}
	return (addr);
}
