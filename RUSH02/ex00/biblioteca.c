/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biblioteca.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:53:44 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 20:51:07 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "t_entry.h"

void	parse_value(unsigned char *line, t_entry *curr_d_entry, int *i)
{
	int	initial_pos;
	int	final_pos;
	int	size;

	while (line[*i] == 32 || line[*i] == '\t')
		*i = *i + 1;
	*i = *i + 1;
	while (line[*i] == 32 || line[*i] == '\t')
		*i = *i + 1;
	initial_pos = *i;
	while (is_printable(line[*i]))
		*i = *i + 1;
	final_pos = *i;
	size = final_pos - initial_pos;
	curr_d_entry->value = malloc(size + 1);
	curr_d_entry->value[size] = 0;
	ft_strncpy(curr_d_entry->value, &line[initial_pos], size);
}

void	parse_key(unsigned char *line, t_entry *curr_d_entry, int *i)
{
	int	initial_pos;
	int	final_pos;
	int	size;

	*i = 0;
	while (line[*i] == 32 || line[*i] == '\t')
		*i = *i + 1;
	initial_pos = *i;
	while (is_numeric(line[*i]))
		*i = *i + 1;
	final_pos = *i;
	size = final_pos - initial_pos;
	curr_d_entry->key = malloc(size + 1);
	curr_d_entry->key[size] = 0;
	ft_strncpy(curr_d_entry->key, &line[initial_pos], size);
}

void	sort_len(t_entry *dict, int size)
{
	int		i;
	int		j;
	t_entry	temp;

	i = 1;
	j = 0;
	while (i == 1)
	{
		i = 0;
		j = 0;
		while (j < size - 1)
		{
			if (ft_strlen(dict[j].key) > ft_strlen(dict[j + 1].key))
			{
				temp = dict[j];
				dict[j] = dict[j + 1];
				dict[j + 1] = temp;
				i = 1;
			}
			j++;
		}
	}
}

void	sort_num(t_entry *dict, int size)
{
	int		i;
	int		j;
	t_entry	temp;

	i = 1;
	while (i == 1)
	{
		i = 0;
		j = 0;
		while (j < size - 1)
		{
			if (ft_strlen(dict[j].key) == ft_strlen(dict[j + 1].key))
			{
				if (ft_strcmp(dict[j].key, dict[j + 1].key) >= 1)
				{
					temp = dict[j];
					dict[j] = dict[j + 1];
					dict[j + 1] = temp;
					i = 1;
				}
			}
			j++;
		}
	}
}

int	have_duplicate_key(t_entry *dict, int size)
{
	int	i;

	i = 1;
	while (i < size - 1)
	{
		if (ft_strcmp(dict[i].key, dict[i + 1].key) == 0)
			return (1);
		i++;
	}
	return (0);
}
