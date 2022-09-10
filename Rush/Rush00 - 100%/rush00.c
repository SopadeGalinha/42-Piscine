/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:15:26 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/11 16:12:47 by aappleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	printx(char a, char b, char c, int x)
{
	int	i;	

	i = 1;
	if (x != 1)
	{
		ft_putchar(a);
		while (i <= (x - 2))
		{
			ft_putchar(b);
			i++;
		}
		ft_putchar(c);
	}
	else
	{
		ft_putchar(a);
	}
}

void	printy(int y, int x, int j)
{
	if (j == 1)
	{
		printx('o', '-', 'o', x);
	}
	else
	{
		if (j == y)
		{
			printx('o', '-', 'o', x);
		}
		if (j != 1 && j != y)
		{
			printx('|', ' ', '|', x);
		}
	}
}

void	rush(int x, int y)
{
	int	j;

	if (x > 0 && y > 0)
	{
		j = 1;
		while (j <= y)
		{
			printy(y, x, j);
			ft_putchar('\n');
			j++;
		}
	}
}
