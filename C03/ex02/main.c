/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:23:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/24 17:29:05 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	srcori[2] = "a\0";
	char	destori[10] = "0123\0";
	char	srcmine[2] = "a\0";
	char	destmine[10] = "0123\0";

	ft_strcat(destmine, srcmine);
	printf("Src mine:  %s\n", srcmine);
	printf("Dest mine: %s\n", destmine);
	strcat(destori, srcori);
	printf("Src ori:  %s\n", srcori);
	printf("Dest ori: %s\n", destori);
}
