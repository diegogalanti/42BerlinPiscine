/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_manager.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:29:37 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 17:13:32 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "t_entry.h"

int	get_file_len(char *path)
{
	unsigned char	buffer[100];
	int				bytes_read;
	int				len;
	int				fildes;

	fildes = open(path, O_RDONLY);
	if (fildes == -1)
		return (-1);
	len = 0;
	bytes_read = 100;
	while (bytes_read == 100)
	{
		bytes_read = read(fildes, buffer, 100);
		if (bytes_read == -1)
			return (-1);
		len += bytes_read;
	}
	if (close(fildes) == -1)
		return (-1);
	return (len);
}

unsigned char	*read_full_file(char *path)
{
	int				fildes;
	unsigned char	*buffer;
	int				len;

	len = get_file_len(path);
	if (len == -1)
		return (0);
	fildes = open(path, O_RDONLY);
	if (fildes == -1)
		return (0);
	buffer = malloc(len + 1);
	buffer[len] = 0;
	if (read(fildes, buffer, len) == -1)
		return (0);
	if (close(fildes) == -1)
		return (0);
	return (buffer);
}
