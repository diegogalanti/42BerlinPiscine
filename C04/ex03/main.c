/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:36:58 by digallar          #+#    #+#             */
/*   Updated: 2022/08/31 17:21:35 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	number[] = " 	\r\v\f\n\t+--++-567b566bbababla";

	printf("number = %d", ft_atoi(number));
}
