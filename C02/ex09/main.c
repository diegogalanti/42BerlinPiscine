/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:54:04 by digallar          #+#    #+#             */
/*   Updated: 2022/08/23 17:15:06 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	sample_text[62] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	printf("String before: %s\n", sample_text);
	printf("String after: %s\n", ft_strcapitalize(sample_text));
}
