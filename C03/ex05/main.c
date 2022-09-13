/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:47:52 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 10:14:19 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char			srcmine[] = "l33r";
	char			destmine[] = "42dfgd";
	unsigned int	result;

	result = ft_strlcat(destmine, srcmine, 0);
	printf("Src mine:  %s\n", srcmine);
	printf("Dest mine: %s\n", destmine);
	printf("Result:    %d\n", result);
}
