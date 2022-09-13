/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 10:42:09 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 08:57:44 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			dest[] = "\0";
	char			src[12] = "abcdefghijk\0";
	unsigned int	n;

	printf("Src before: %s\n", src);
	n = ft_strlcpy(dest, src, 0);
	printf("Src lenght: %d\n", n);
	printf("Dest after: %s\n", dest);
}
