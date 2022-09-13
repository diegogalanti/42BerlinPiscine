/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:58:32 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 17:22:59 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	original[] = "Tropa de elite";
	char	*copy;

	copy = ft_strdup(original);
	printf("Original = %s\n", original);
	printf("Copy = %s\n", copy);
	free(copy);
	return (0);
}
