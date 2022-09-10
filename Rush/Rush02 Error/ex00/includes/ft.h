/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:30:41 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 19:07:03 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <errno.h>
# include <string.h>
# include <libgen.h>

typedef struct s_dict t_dict;

struct s_dict
{
	int				nb;
	int				suf;
	char			*lit;
	struct s_dict	*next;
};

void	check_and(int nb, int i, char *nbr);
int		check_length(char *nbr);
int		check_number(int nb, t_dict *begin);
int		check_suf(int j, t_dict *begin);
int		ft_atoi(char *str);
void	ft_clear(t_dict	**begin);
int		ft_file_read(char *filepath, t_dict **begin);
int		ft_list_push(t_dict **list, int n, int suf, char *lit);
void	ft_putchar(char c);
void	ft_list_sort(t_dict **beginlist);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_strdub(char *src);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
int		parse(t_dict **begin, char *str);
int		numbercheck(char *nbr, t_dict *begin);
void	print_suf(int i, char *nbr, int j, t_dict *begin);
void	send_to_print(int nbr, t_dict *begin, int i, char *nbrc);
#endif 
