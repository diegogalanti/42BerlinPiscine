/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 18:36:58 by digallar          #+#    #+#             */
/*   Updated: 2022/08/29 11:26:54 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	main(void)
{
	char	base[] = "ablablaba\0";
	char	number[] = "bababla";

	printf("number = %d", ft_atoi_base(number, base));
}
