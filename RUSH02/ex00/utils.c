/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:46:08 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 20:35:19 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, unsigned char *src, unsigned int n)
{
	unsigned int		iterator;

	iterator = 0;
	while (src[iterator] != '\0' && iterator < n)
	{
		dest[iterator] = src[iterator];
		iterator++;
	}
	while (iterator < n)
	{
		dest[iterator] = '\0';
		iterator++;
	}
	return (dest);
}

int	is_numeric(char c)
{
	if (c < 48 || c > 57)
		return (0);
	return (1);
}

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	index;

	i = 0;
	index = -1;
	while (dest[i])
		i++;
	while (src[++index])
		dest[i + index] = src[index];
	dest[i + index] = '\0';
	return (dest);
}
