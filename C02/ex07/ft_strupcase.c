/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 16:51:44 by digallar          #+#    #+#             */
/*   Updated: 2022/08/20 18:12:58 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	unsigned int		iterator;

	iterator = 0;
	while (str[iterator] != '\0')
	{
		if (str[iterator] > 96 && str[iterator] < 123)
		{
			str[iterator] = str[iterator] - 32;
		}		
		iterator++;
	}
	return (str);
}
