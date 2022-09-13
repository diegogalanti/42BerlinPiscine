/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:59:17 by digallar          #+#    #+#             */
/*   Updated: 2022/09/02 10:44:29 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

int	main(int argsc, char *args[])
{
	char	*result;

	if (argsc != 4)
		return (0);
	result = ft_convert_base(args[1], args[2], args[3]);
	printf("Result = %s\n", result);
	free(result);
	return (1);
}
