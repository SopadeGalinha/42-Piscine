/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:44:09 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 14:59:07 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_suf(int j, t_dict *begin)
{
	while ((begin->next != 0) && (begin->suf == 0 || j != begin-> nb))
		begin = begin->next;
	if (begin->next == 0)
	{
		ft_putstr("Error\n");
		return (0);
	}
	return (1);
}

int	check_number(int nb, t_dict *begin)
{
	while ((begin->next != 0) && (begin->suf == 1 || nb != begin->nb))
		begin = begin->next;
	if (begin->next == 0)
		return (0);
	return (1);
}

int	check_length(char *nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (nbr[j] == '0')
		j++;
	while (nbr[i + j])
		i++;
	return (i);
}

void	check_and(int nb, int i, char *nbr)
{
	int	j;

	j = 0;
	if (nb != 0)
	{
		while (nbr[j] == 0 && j < i)
			i++;
		if (((i - j) > 2 && nb % 100 != 0) && check_length(nbr) > 2
			&& (nb / 100 >= 1 || i == check_length(nbr)))
			ft_putstr("and ");
	}
}
