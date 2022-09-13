/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:44 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 18:25:08 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int		iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if (str[iterator] > 64 && str[iterator] < 91)
		{
			str[iterator] = str[iterator] + 32;
		}		
		iterator++;
	}
	return (str);
}
