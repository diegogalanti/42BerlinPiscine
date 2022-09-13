/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:55:42 by digallar          #+#    #+#             */
/*   Updated: 2022/08/17 12:12:10 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

int	main(void)
{
	int		negative_n;
	int		positive_n;
	int		zero_n;
	char	lf;

	negative_n = -1;
	positive_n = 1;
	zero_n = 0;
	lf = 10;
	ft_is_negative(negative_n);
	write(1, &lf, 1);
	ft_is_negative(positive_n);
	write(1, &lf, 1);
	ft_is_negative(zero_n);
	return (0);
}
