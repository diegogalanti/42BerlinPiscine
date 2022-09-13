/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:15 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 12:48:10 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	dest[5] = "aj";
	char	src[6] = "123 ";
	char	dest2[5] = "dj";
	char	src2[6] = "123 ";

	strcpy(dest2, src2);
	printf("Dest original: %s\n", dest2);
	ft_strcpy(dest, src);
	printf("Dest mine: %s\n", dest);
}
