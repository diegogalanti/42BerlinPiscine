/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:56 by digallar          #+#    #+#             */
/*   Updated: 2022/09/22 15:55:08 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(int argsc, char *args[])
{
	char	**result;
	int		i;

	if (argsc != 3)
		return (1);
	result = ft_split(args[1], args[2]);
	i = 0;
	while (result[i])
	{
		printf("Result = %s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
