/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:57:06 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 09:38:08 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_char_array(char *array, int size)
{
	int	i;

	i = 0;
	while (i < size && array[i] != 0)
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

void	convert_charsarray_to_hex(char *array, char buf[], int size)
{
	int		i;
	int		j;

	i = 0;
	j = -1;
	while (j < size)
	{
		if (array[i] == 0)
			return ;
		else
		{
			buf[++j] = "0123456789abcdef"[((unsigned char)array[i]) / 16];
			buf[++j] = "0123456789abcdef"[((unsigned int)array[i++]) % 16];
			if (array[i] == 0)
				return ;
			else
			{
				buf[++j] = "0123456789abcdef"[((unsigned char)array[i]) / 16];
				buf[++j] = "0123456789abcdef"[((unsigned int)array[i++]) % 16];
				buf[++j] = 32;
			}
		}
	}
}

void	print_line(char *address)
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
	while (iterator < 41)
	{
		buffer_hex_positions[iterator] = 32;
		iterator++;
	}
	buffer_hex_positions[40] = 0;
	convert_charsarray_to_hex(address, buffer_hex_positions, 40);
	write_char_array(buffer_hex_positions, 40);
	write_char_array(address, 16);
}

void	*ft_print_memory(void *addr, int size)
{
	int		iterator;
	char	*address;
	char	nl;
	int		real_size;

	real_size = 0;
	address = addr;
	while (address[real_size] != '\0')
		real_size++;
	if (real_size < size)
		size = real_size;
	else
		address[size] = 0;
	iterator = 0;
	nl = '\n';
	while (iterator < size)
	{
		print_line(address + iterator);
		iterator += 16;
		write(1, &nl, 1);
	}
	return (addr);
}
