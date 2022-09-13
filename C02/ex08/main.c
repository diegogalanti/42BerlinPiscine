/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:49:28 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 18:24:24 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	uppercase[21];

	uppercase[0] = 'T';
	uppercase[1] = 'H';
	uppercase[2] = 'E';
	uppercase[3] = 'Y';
	uppercase[4] = '\'';
	uppercase[5] = 'R';
	uppercase[6] = 'e';
	uppercase[7] = ' ';
	uppercase[8] = 'F';
	uppercase[9] = 'o';
	uppercase[10] = 'r';
	uppercase[11] = 'M';
	uppercase[12] = 'i';
	uppercase[13] = 'N';
	uppercase[14] = 'g';
	uppercase[15] = 0;
	printf("String before: %s\n", uppercase);
	printf("String after: %s\n", ft_strlowcase(uppercase));
}
