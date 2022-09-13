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

int	ft_strstr(char *str, char *to_find, char **output)
{
	int	str_i;
	int	needle_i;
	int	count;

	needle_i = 0;
	str_i = -1;
	count = 1;
	while (str_i++ < ft_strlen(str) && needle_i < ft_strlen(to_find))
	{
		if (to_find[needle_i] == str[str_i])
		{
			if (to_find[needle_i + 1] == 0)
			{
				if (*output == 0)
					*output = &str[str_i + 1 - ft_strlen(to_find)];
				count++;
				needle_i = -1;
			}
			needle_i++;
		}
		else
			needle_i = 0;
	}
	return (count);
}

int	get_size(char *str, char *charset)
{
	int		size_before;
	int		size_after;
	char	*leftover;

	leftover = 0;
	size_before = ft_strlen(str);
	ft_strstr(str, charset, &leftover);
	if (leftover == 0)
		return (size_before);
	size_after = ft_strlen(leftover);
	if (size_before == size_after)
		return (0);
	return (size_before - size_after);
}

char	*concatenate(int s_n_s, char *str, char *charset)
{
	char	*result;
	int		i;
	int		j;

	result = malloc((s_n_s + ft_strlen(charset) * 2 + 1));
	i = -1;
	j = 0;
	while (charset[++i])
	{
		result[j++] = charset[i];
	}
	i = -1;
	while (++i < s_n_s)
	{
		result[j] = str[i];
		j++;
	}
	i = -1;
	while (charset[++i])
	{
		result[j] = charset[i];
		j++;
	}
	result[j] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		string_count;
	int		s_n_s;
	int		i;
	char	*test;

	test = 0;
	string_count = ft_strstr(str, charset, &test);
	result = malloc((string_count + 1) * 8);
	i = -1;
	while (++i < string_count)
	{
		s_n_s = get_size(str, charset);
		if (s_n_s == 0)
		{
			string_count--;
			i--;
			str += ft_strlen(charset);
			continue ;
		}
		result[i] = concatenate(s_n_s, str, charset);
		str += s_n_s + ft_strlen(charset);
	}
	result[string_count] = 0;
	return (result);
}
