/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_entry.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: digallar <digallar@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:31:24 by digallar          #+#    #+#             */
/*   Updated: 2022/09/04 23:07:07 by digallar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef T_ENTRY_H
# define T_ENTRY_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct entry
{
	char	*key;
	char	*value;
}	t_entry;

void			print_error(void);
void			print_dict_error(void);
t_entry			*gimme_dictionary(unsigned char *string, int *size, int *error);
unsigned char	*read_full_file(char *path);
char			*handle_one(t_entry *dict_array, char c, int size);
char			*handle_two(t_entry *dict_array, char *c, int size);
char			*handle_three(t_entry *dict_array, char *c, int size);
char			*handle_complex(t_entry *dict_array, char *c, int size);
void			print_number(char *number_in_words);
char			*ft_strcat(char *dest, char *src);
int				ft_strlen(char *str);
void			parse_value(unsigned char *line, t_entry *curr_d_entry, int *i);
void			parse_key(unsigned char *line, t_entry *curr_d_entry, int *i);
int				is_numeric(char c);
int				is_printable(char c);
char			*ft_strncpy(char *dest, unsigned char *src, unsigned int n);
void			clean(t_entry *space, int size);
void			sort_num(t_entry *dict, int size);
void			sort_len(t_entry *dict, int size);
int				ft_strcmp(char *s1, char *s2);
int				have_duplicate_key(t_entry *dict, int size);
char			*pos(t_entry *dict_array, char *c, int size);

#endif
