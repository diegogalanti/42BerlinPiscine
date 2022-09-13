/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 19:47:52 by digallar          #+#    #+#             */
/*   Updated: 2022/08/30 10:10:35 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size] != '\0')
		size++;
	return (size);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	if (size == 0 && dest_size == 0)
		return (src_size);
	if (dest_size >= size)
	{
		return (size + src_size);
	}
	while (src[i] != 0 && (i + dest_size) < size - 1)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = 0;
	return (dest_size + src_size);
}
