/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:23:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/29 18:16:07 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	srcori[5] = "1212\0";
	char	destori[6] = "0123\0";
	char	srcmine[5] = "1212\0";
	char	destmine[6] = "0123\0";
	
	ft_strncat(destmine, srcmine, 6);
	printf("Src mine:  %s\n", srcmine);
	printf("Dest mine: %s\n", destmine);
	strncat(destori, srcori, 6);
	printf("Src ori:  %s\n", srcori);
	printf("Dest ori: %s\n", destori);
}
