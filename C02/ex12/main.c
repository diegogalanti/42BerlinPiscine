/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:57:06 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 09:39:05 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_print_memory(void *addr, unsigned int size);

int	main(void)
{
	char	anunciacao[] = "abcdadsadsdasdasdasdasda";

	ft_print_memory(anunciacao, 17);
}
