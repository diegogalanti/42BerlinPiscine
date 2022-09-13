/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:21:12 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 20:43:27 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "t_entry.h"

int	is_empty(unsigned char *line, int i)
{
	if (line[i] == '\n')
		return (1);
	return (0);
}

int	is_valid_line(unsigned char *line, int *valid)
{
	int	i;

	*valid = 1;
	i = 0;
	if (is_empty(line, i))
		return (i);
	while (line[i] == 32 || line[i] == '\t')
		i++;
	if (!is_numeric(line[i]))
		*valid = 0;
	while (is_numeric(line[i]))
		i++;
	while (line[i] == 32 || line[i] == '\t')
		i++;
	if (line[i++] != ':')
		*valid = 0;
	while (line[i] == 32 || line[i] == '\t')
		i++;
	if (!is_printable(line[i]))
		*valid = 0;
	while (is_printable(line[i]))
		i++;
	if (line[i] != '\n' && line[i] != '\0')
		*valid = 0;
	return (i);
}

int	count_lines(unsigned char *string)
{
	int	count;
	int	i;
	int	offset;
	int	valid;
	int	current;

	offset = 0;
	count = 0;
	i = 0;
	valid = 0;
	while (string[i])
	{
		if (string[i] == '\n')
		{
			current = is_valid_line(&string[offset], &valid);
			if (current == 0)
				count--;
			offset += current + 1;
			count++;
			if (!valid)
				return (-1);
		}
		i++;
	}
	return (count);
}

int	parse_line(unsigned char *line, t_entry *curr_d_entry, int *position)
{
	int	offset;
	int	i;
	int	valid;

	offset = is_valid_line(line, &valid);
	if (offset == 0)
	{
		*position = *position - 1;
		return (0);
	}
	parse_key(line, curr_d_entry, &i);
	parse_value(line, curr_d_entry, &i);
	return (offset);
}

t_entry	*gimme_dictionary(unsigned char *string, int *size, int *error)
{
	int		offset;
	int		i;
	t_entry	*dictionary;

	i = 0;
	*error = 0;
	*size = count_lines(string);
	if (*size == -1)
	{
		*error = 1;
		return (0);
	}
	dictionary = malloc(*size * 16);
	offset = 0;
	while (i < *size)
	{
		offset += parse_line(&string[offset], &dictionary[i], &i) + 1;
		i++;
	}
	return (dictionary);
}
