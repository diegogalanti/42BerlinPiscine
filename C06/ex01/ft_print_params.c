/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:44:14 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 16:08:46 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
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
	write(1, str, size);
	write(1, "\n", 1);
}

int	main(int argsc, char *args[])
{
	int	i;

	i = 0;
	while (++i < argsc)
		ft_putstr(args[i]);
	return (0);
}
