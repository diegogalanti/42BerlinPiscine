/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 10:00:26 by digallar          #+#    #+#             */
/*   Updated: 2022/08/17 10:21:59 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphabet[26];
	int		count;

	count = 0;
	while (count <= 25)
	{
		alphabet[count] = 97 + count;
		count++;
	}
	write(1, &alphabet, 26);
}
