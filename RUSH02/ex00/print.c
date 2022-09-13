/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 20:19:17 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 17:13:34 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "t_entry.h"

void	print_error(void)
{
	write(1, "Error\n", 6);
}

void	print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}

void	print_number(char *number_in_words)
{
	int	len;

	len = ft_strlen(number_in_words);
	write(1, number_in_words, len);
	write(1, "\n", 1);
}
