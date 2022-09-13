/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:00:55 by digallar          #+#    #+#             */
/*   Updated: 2022/08/24 15:21:13 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[8] = "abfjdad\0";
	char	str2[5] = "abfjd";
	int		result;

	result = strncmp(str1, str2, 10);
	printf("Result official: %d\n", result);
	result = ft_strncmp(str1, str2, 10);
	printf("Result mine: %d\n", result);
}