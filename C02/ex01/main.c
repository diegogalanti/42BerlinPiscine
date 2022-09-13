/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:15 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 12:57:34 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	dest[6];
	char	src[6] = "2";
	char	dest2[6];
	char	src2[6] = "2";
	unsigned int	n;

	strncpy(dest2, src2, 1);
	printf("Dest original: %s\n", dest2);
	ft_strncpy(dest, src, 1);
	printf("Dest mine: %s\n", dest);
}
