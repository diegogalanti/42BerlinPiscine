/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:17 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 20:01:42 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argsc, char *args[])
{
	char	*result_array;

	result_array = ft_strjoin(argsc - 2, &args[2], args[1]);
	printf("Result = %s\n", result_array);
	free(result_array);
	return (1);
}
