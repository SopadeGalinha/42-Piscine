/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 19:18:44 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 14:56:44 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print_nb(int nb, t_dict *begin)
{
	while (begin->suf == 1 || nb != begin->nb)
		begin = begin->next;
	ft_putstr(begin->lit);
	if (nb < 20 || nb > 99)
	{
		ft_putchar(' ');
	}
}

void	print_suf(int i, char *nbr, int j, t_dict *begin)
{
	while (begin->suf == 0 || j != begin->nb)
		begin = begin->next;
	ft_putstr(begin->lit);
	while (nbr[i] == '0')
		i++;
	if (nbr[i] != '\0' && (i != check_length(nbr) - 1) && (i != check_length(nbr) - 2))
		ft_putstr(", ");
	if ((i == check_length(nbr) - 1) || (i == check_length(nbr) - 2))
		ft_putchar(' ');
}

void	print_units(int nbr, char *nbrc, int i, t_dict *begin)
{
	int	nb;

	if ((nbr % 100) >= 20)
	{
		check_and(nbr, i, nbrc);
		print_nb((nb = (nbr % 100) - (nbr % 10)), begin);
		if (nbr % 10 != 0)
		{
			nb = nbr % 10;
			ft_putchar('-');
			print_nb(nb, begin);
		}
	}
	else if (((nbr % 100) < 20) && (nbr % 100 != 0))
	{
		print_nb(nb = nbr % 100, begin);
	}
}

void	print_hundreds(int nbr, char *nbrc, int i, t_dict *begin)
{
	int	nb;

	if ((nbr / 100) > 0)
	{
		nb = nbr / 100;
		print_nb(nb, begin);
		print_nb(100, begin);
	}
	if (check_number(nbr % 100, begin) == 1)
	{
		check_and(nbr, i, nbrc);
		print_nb(nbr % 100, begin);
		if ((nbr % 100) >= 20)
			ft_putchar(' ');
	}
	else
		print_units(nbr, nbrc, i, begin);
}

void	send_to_print(int nbr, t_dict *begin, int i, char *nbrc)
{
	int	nb;

	nb = nbr;
	if (check_number(nb, begin) == 1)
	{
		if (nb == 100)
			ft_putstr("one");
		check_and(nbr, i, nbrc);
		print_nb(nb, begin);
		if (nb >= 20 && nb <= 99)
			ft_putchar(' ');
	}
	else
		print_hundreds(nbr, nbrc, i, begin);
}
