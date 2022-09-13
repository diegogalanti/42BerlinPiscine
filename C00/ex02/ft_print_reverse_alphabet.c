/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:26 by digallar          #+#    #+#             */
/*   Updated: 2022/08/17 10:24:30 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	reverse_alphabet[26];
	int		count;

	count = 0;
	while (count <= 25)
	{
		reverse_alphabet[count] = 122 - count;
		count++;
	}
	write(1, &reverse_alphabet, 26);
}
