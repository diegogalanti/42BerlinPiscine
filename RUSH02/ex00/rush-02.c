/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:28:42 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 23:31:37 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "t_entry.h"

char	*check_number_atoi(char *str)
{
	int		i;
	char	*result;
	int		size;

	i = 0;
	result = 0;
	size = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	if (!is_numeric(str[i]))
		return (0);
	while (is_numeric(str[i + size]))
	{
		size++;
	}
	result = malloc(size + 1);
	ft_strncpy(result, (unsigned char *)&str[i], size);
	return (result);
}

int	check_max_size(char *number_char)
{
	if (ft_strlen(number_char) >= 40)
	{
		print_dict_error();
		return (1);
	}
	return (0);
}

void	solve(t_entry *dictionary, char *number_args, int size, int error)
{
	char	*number_char;

	if (error || have_duplicate_key(dictionary, size))
	{
		print_dict_error();
		return ;
	}
	number_char = check_number_atoi(number_args);
	if (number_char == 0)
	{
		print_error();
		return ;
	}
	if (check_max_size(number_char))
		return ;
	if (ft_strlen(number_char) == 1)
		print_number(handle_one(dictionary, number_char[0], size));
	else if (ft_strlen(number_char) == 2)
		print_number(handle_two(dictionary, number_char, size));
	else if (ft_strlen(number_char) == 3)
		print_number(handle_three(dictionary, number_char, size));
	else
		print_number(handle_complex(dictionary, number_char, size));
	clean(dictionary, size);
	free(number_char);
}

int	main(int argsc, char *args[])
{
	int				size;
	unsigned char	*string_dict;
	t_entry			*dictionary;
	int				error;

	string_dict = 0;
	if (argsc == 2)
		string_dict = read_full_file("numbers.dict");
	else if (argsc == 3)
		string_dict = read_full_file(args[1]);
	if (string_dict == 0)
	{
		free(string_dict);
		print_error();
		return (0);
	}
	dictionary = gimme_dictionary(string_dict, &size, &error);
	sort_len(dictionary, size);
	sort_num(dictionary, size);
	free(string_dict);
	if (argsc == 2)
		solve(dictionary, args[1], size, error);
	else if (argsc == 3)
		solve(dictionary, args[2], size, error);
	return (0);
}
