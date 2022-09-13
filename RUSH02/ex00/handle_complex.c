/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_complex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:19:27 by ezakirov          #+#    #+#             */
/*   Updated: 2022/09/04 23:06:44 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_entry.h"

int	g_sets_of_3;

char	*handle_left_most(t_entry *dict_array, char **c, int size)
{
	char	*f;
	int		modulo;
	char	*res;
	char	*position;
	int		i;

	modulo = ft_strlen(*c) % 3;
	if (modulo == 1)
	{
		f = handle_one(dict_array, *c[0], size);
		i = 1;
	}
	else
	{
		f = handle_two(dict_array, *c, size);
		i = 2;
	}
	position = pos(dict_array, *c, size);
	*c = *c + i;
	res = malloc(ft_strlen(f) + ft_strlen(position) + 2);
	res[0] = 0;
	ft_strcat(res, f);
	ft_strcat(res, " ");
	ft_strcat(res, position);
	return (res);
}

char	*hls(char *f, char *tmp, char *position)
{
	char	*res;

	if (ft_strlen(tmp) != 0)
	{
		res = malloc(ft_strlen(f) + ft_strlen(position) + ft_strlen(tmp) + 3);
		res[0] = 0;
		ft_strcat(res, tmp);
		ft_strcat(res, " ");
		ft_strcat(res, f);
		ft_strcat(res, " ");
		ft_strcat(res, position);
	}
	else
	{
		res = malloc(ft_strlen(f) + ft_strlen(position) + 2);
		res[0] = 0;
		ft_strcat(res, f);
		ft_strcat(res, " ");
		ft_strcat(res, position);
	}
	return (res);
}

char	*hs(char *f, char *tmp, char *position)
{
	char	*res;

	if (ft_strlen(tmp) != 0)
	{
		res = malloc(ft_strlen(f) + ft_strlen(position) + ft_strlen(tmp) + 2);
		res[0] = 0;
		ft_strcat(res, tmp);
		ft_strcat(res, " ");
		ft_strcat(res, f);
	}
	else
	{
		res = malloc(ft_strlen(f) + 1);
		res[0] = 0;
		ft_strcat(res, f);
		free(tmp);
	}
	return (res);
}

int	check_zzz(t_entry *d, char *c, int s, int *j)
{
	if (ft_strlen(handle_three(d, &c[*j * 3], s)) == 0)
	{
		*j = *j + 1;
		return (1);
	}
	return (0);
}

char	*handle_complex(t_entry *d, char *c, int s)
{
	int		j;
	char	*tmp;
	char	*res;

	g_sets_of_3 = (ft_strlen(c) / 3) + 1;
	j = 0;
	if ((ft_strlen(c) % 3) == 0)
		res = malloc(0);
	else
		res = handle_left_most(d, &c, s);
	while (--g_sets_of_3 != 0)
	{
		if (check_zzz(d, c, s, &j))
			continue ;
		tmp = malloc(ft_strlen(res) + 1);
		tmp[0] = 0;
		ft_strcat(tmp, res);
		free(res);
		if (g_sets_of_3 != 1)
			res = hls(handle_three(d, &c[j * 3], s), tmp, pos(d, &c[j * 3], s));
		else
			res = hs(handle_three(d, &c[j * 3], s), tmp, pos(d, &c[j * 3], s));
		j++;
	}
	return (res);
}
