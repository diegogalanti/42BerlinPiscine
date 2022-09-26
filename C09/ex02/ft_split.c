/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:56 by digallar          #+#    #+#             */
/*   Updated: 2022/09/22 16:01:59 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	in(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
	{
		if (charset[i] == c)
			return (1);
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		iterator;

	iterator = 0;
	while (src[iterator] != '\0' && iterator < n)
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}

int	ft_char_count(char *str, char *sep)
{
	int	str_i;
	int	count;
	int	found_at;

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

char	*get_next_string(char *str, char *charset, int *start_pos)
{
	int		end_pos;
	char	*result;

	end_pos = 0;
	while (str[*start_pos] && in(str[*start_pos], charset))
		(*start_pos)++;
	end_pos = *start_pos;
	while (str[end_pos] && !in(str[end_pos], charset))
		end_pos++;
	result = malloc(end_pos - *start_pos + 1);
	ft_strncpy(result, &str[*start_pos], (end_pos - *start_pos) + 1);
	result[(end_pos - *start_pos)] = 0;
	*start_pos = end_pos + 1;
	end_pos = -1;
	while (result[++end_pos])
	{
		if (result[end_pos] != ' ' && result[end_pos] != '\t')
			return (result);
	}
	free(result);
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		string_count;
	int		i;
	int		start_index;
	int		empty_count;

	string_count = ft_char_count(str, charset);
	result = malloc((string_count + 1) * 8);
	i = -1;
	start_index = 0;
	empty_count = 0;
	while (++i < string_count)
	{
		result[i - empty_count] = get_next_string(str, charset, &start_index);
		if (!result[i - empty_count])
		{
			empty_count++;
			result[string_count - empty_count] = 0;
		}
	}
	result[string_count] = 0;
	return (result);
}
