/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:49:28 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 18:14:30 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	lowercase[21];

	lowercase[0] = 'H';
	lowercase[1] = 'e';
	lowercase[2] = 'y';
	lowercase[3] = ' ';
	lowercase[4] = 'H';
	lowercase[5] = 'o';
	lowercase[6] = ' ';
	lowercase[7] = 'l';
	lowercase[8] = 'g';
	lowercase[9] = '!';
	lowercase[10] = 0;
	printf("String before: %s\n", lowercase);
	printf("String after: %s\n", ft_strupcase(lowercase));
}
