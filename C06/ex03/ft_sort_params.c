/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:44:45 by digallar          #+#    #+#             */
/*   Updated: 2022/09/01 16:41:01 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	iterator;
	int	size;

	iterator = 0;
	size = 0;
	while (str[iterator] != '\0')
	{
		iterator++;
		size++;
	}
	write(1, str, size);
	write(1, "\n", 1);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (1)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == 0)
				return (0);
			i++;
		}
		else
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return (0);
}

int	main(int argsc, char *args[])
{
	int	iterator;
	int	cont;

	cont = 1;
	while (cont == 1)
	{
		iterator = 1;
		cont = 0;
		while (iterator < argsc - 1)
		{
			if (ft_strcmp(args[iterator], args[iterator + 1]) > 0)
			{
				swap(&args[iterator], &args[iterator + 1]);
				cont = 1;
			}
			iterator++;
		}
	}
	iterator = 0;
	while (++iterator < argsc)
		ft_putstr(args[iterator]);
	return (0);
}
