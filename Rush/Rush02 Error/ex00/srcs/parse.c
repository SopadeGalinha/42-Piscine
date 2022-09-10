/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:38:32 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 19:45:17 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_exists(t_dict *begin, int nb)
{
	while (begin)
	{
		if (begin->nb == nb)
			return (0);
		begin = begin->next;
	}
	return (1);
}

int	get_nb(int *nb, int *suf, char *str)
{
	int	i;
	int	j;

	i = 0;
	*nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i >= 4)
	{
		j = -1;
		if ((i - 1) % 3 != 0)
			return (0);
		while (++j < 1)
			if ((j == 0 && (str[j] != '1')) || (j != 0 && str[j] != '0'))
				return (0);
		*nb = i / 3;
		*suf = 1;
	}
	else
		*suf = 0;
	return (1);
}

char	*ft_space(char *str)
{
	int		i;
	int		j;
	char	*s1;

	i = -1;
	j = 0;
	while (str[++i])
	{
		if (str[i] != ' ')
			j++;
		else if (str[i - 1] == ' ')
			j++;
	}
	s1 = malloc(sizeof (char) * (j + 1));
	if (s1 == NULL)
		return (NULL);
	i = -1;
	j = 0;
	while (str[++i])
		if (str[i] != ' ' || str[i - 1] != ' ')
			s1[j++] = str[i];
	s1[j] = '\0';
	return (s1);
}

int	test_line(char *str, int *i)
{
	int	j;

	while (str[*i] >= '0' && str[*i] <= '9')
		(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	if (str[*i] != ':')
		return (0);
	(*i)++;
	while (str[*i] == ' ')
		(*i)++;
	j = *i;
	while (str[++j])
		if (str[j] <= 31 || str[j] >= 127)
			return (0);
	return (1);
}

int	parse(t_dict **begin, char *str)
{
	int		nb;
	int		i;
	int		suf;
	char	*s1;
	
	if (get_nb(&nb, &suf, str) == 0)
		return (0);
	if (nb != 0 || ft_atoi(str) != -1)
	{
		if (suf == 0)
			if (check_exists(*begin, nb) == 0)
				return (0);
		i = 0;
		s1 = strdup(str + i);
		if (test_line(str, &i) == 0 || s1 == NULL)
			return (0);
		s1 = ft_space(s1);
		if (s1 == NULL)
			return (0);
		if (ft_list_push(begin, nb, suf, s1) == 0)
			return (0);
		return (1);
	}
	return (0);
}
