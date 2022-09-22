/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:27:46 by digallar          #+#    #+#             */
/*   Updated: 2022/09/22 18:10:38 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

 void	ft_show_tab(struct s_stock_str *par)
 {
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		printf("Size = %d\n", par[i].size);
		printf("Str = %s\n", par[i].str);
		printf("Copy = %s\n", par[i].copy);
		free(par[i].copy);
		i++;
	}
	free(par);
 }
 