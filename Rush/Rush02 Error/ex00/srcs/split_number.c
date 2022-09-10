/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:06:00 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 16:27:35 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	check_first(char *nbr, int *i, int *j, t_dict *begin)
{
	int		k;
	char	nbr2[4];

	k = 0;
	while (nbr[*i] == '0')
		(*i)++;
	if (*j % 3 != 0)
	{
		while (*j % 3 != 0 || *j == 0)
		{
			nbr2[k++] = nbr[(*i)++];
			(*j)--;
		}
		nbr2[k] = '\0';
		send_to_print(ft_atoi(nbr2), begin, *i, nbr);
		if (*i == 0)
		{
			ft_putchar('\n');
			return (0);
		}
		if (*j >= 3)
			print_suf(*i, nbr, *j / 3, begin);
	}
	return (1);
}

void	make_three(int i, int j, char *nbr, t_dict *begin)
{
	int		nb;
	int		k;
	char	nbr2[4];

	while (j > 0)
	{
		k = 0;
		while (k != 3)
		{
			nbr2[k] = nbr[i];
			i++;
			j--;
			k++;
		}
		nbr2[k] = '\0';
		nb = ft_atoi(nbr2);
		if (nb != 0)
		{
			send_to_print(nb, begin, i, nbr);
			if (j > 3)
				print_suf(i, nbr, j / 3, begin);
		}
	}
}

int	numbercheck(char *nbr, t_dict *begin)
{
	int	i;
	int	j;
	int	k;
	int nb;

	i = 0;
	nb = 0;
	k = 0;
	j = check_length(nbr);
	if (j > 3 && check_suf((j - 1) / 3, begin) == 0)
		return (0);
	if (ft_atoi(nbr) == 0)
	{
		ft_putstr("zero");
		ft_putchar('\n');
		return (0);
	}
	if (check_first(nbr, &i, &j, begin) == 0)
		return (0);
	make_three(i, j, nbr, begin);
	ft_putchar('\n');
	return (0);
}	
