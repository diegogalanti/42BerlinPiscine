/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 12:51:26 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 17:22:30 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putstr_non_printable(char *str);

int	main(void)
{
	char	teste_string[] = "0xba \xba 0xa1 \xa1 xa6 \xa6";

	ft_putstr_non_printable(teste_string);
}
