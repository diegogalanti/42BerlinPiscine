/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 17:43:08 by digallar          #+#    #+#             */
/*   Updated: 2022/08/24 19:46:27 by digallar         ###   ########.fr       */
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

void	start_vars(int *str_i, int *needle_i)
{
	*needle_i = 0;
	*str_i = -1;
}

char	*ft_strstr(char *str, char *to_find)
{
	int	needle_size;
	int	haystack_size;
	int	str_i;
	int	needle_i;

	needle_size = ft_strlen(to_find);
	if (needle_size == 0)
		return (str);
	haystack_size = ft_strlen(str);
	start_vars(&str_i, &needle_i);
	while (str_i++ < haystack_size && needle_i < needle_size)
	{
		if (to_find[needle_i] == str[str_i])
		{
			if (to_find[needle_i + 1] == 0)
				return (&str[str_i + 1 - needle_size]);
			needle_i++;
		}
		else
		{
			needle_i = 0;
		}
	}
	return (0);
}
