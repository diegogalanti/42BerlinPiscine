/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:43:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 17:07:05 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	*needle[];
	char	*haystack[];

	printf("Src mine:  %s\n", ft_strstr(haystack, needle));
	printf("Src ori:  %s\n", strstr(haystack, needle));
}
