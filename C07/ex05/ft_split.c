/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:56 by digallar          #+#    #+#             */
/*   Updated: 2022/09/08 17:53:46 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int in(char c, char *charset)
{
	int i;
	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

int	ft_char_count(char *str, char *sep)
{
	int	str_i;
	int	count;
	int found_at;

	str_i = -1;
	count = 1;
	found_at = -1;
	while (str[++str_i])
	{
		if (in(str[str_i], sep))
		{
			if (str_i > (found_at + 1))
					count++;
				found_at = str_i;
		}
	}
	return (count);
}

char *get_next_string(char *str, char *charset, int *start_pos)
{
	int end_pos;
	char *result;
	
	end_pos = 0;
	while (str[*start_pos] && in(str[*start_pos], charset))
		(*start_pos)++;
	printf("start_pos = %d\n", *start_pos);
	end_pos = *start_pos;
	while (str[end_pos] && !in(str[end_pos], charset))
		end_pos++;
	printf("end_pos = %d\n", end_pos);
	result = malloc(end_pos - *start_pos + 1);
	strncpy(result, &str[*start_pos], (end_pos - *start_pos) + 1);
	result[(end_pos - *start_pos)] = 0;
	*start_pos = end_pos + 1;
	return (result);
}

int is_empty(char *str)
{
	int i;

	i = -1;
	while(str[++i])
	{
		if(str[i] != ' ' && str[i] != '\t')
			return (0);
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		string_count;
	int		i;
	int start_index;
	int empty_count;

	string_count = ft_char_count(str, charset);
	result = malloc((string_count + 1) * 8);
	printf("count = %d\n", string_count);
	i = -1;
	start_index = 0;
	empty_count = 0;
	while (++i < string_count)
	{
		result[i - empty_count] = get_next_string(str, charset, &start_index);
		if (is_empty(result[i]))
		{
			empty_count++;
			free(result[i]);
			result[string_count-empty_count] = 0;
		}
	}
	result[string_count] = 0;
	return (result);
}
