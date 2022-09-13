/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:03:56 by digallar          #+#    #+#             */
/*   Updated: 2022/08/24 09:56:41 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[5] = "";
	char	str2[6] = " ";
	int		result;

	result = strcmp(str1, str2);
	printf("Result official: %d\n", result);
	result = ft_strcmp(str1, str2);
	printf("Result mine: %d\n", result);
}
