/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:07:24 by digallar          #+#    #+#             */
/*   Updated: 2022/09/22 17:08:09 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	value;

	value = 0;
	printf("Absolute of value = %d is = %d\n", value, ABS(value));
	value = 10;
	printf("Absolute of value = %d is = %d\n", value, ABS(value));
	value = -10;
	printf("Absolute of value = %d is = %d\n", value, ABS(value));
	return (1);
}
