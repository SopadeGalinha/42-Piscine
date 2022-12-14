/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aappleto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 11:15:26 by aappleto          #+#    #+#             */
/*   Updated: 2021/09/16 10:54:55 by jhgoncal         ###   ########.fr       */
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
		printx('/', '*', '\\', x);
	}
	else
	{
		if (j == y)
		{
			printx('\\', '*', '/', x);
		}
		if (j != 1 && j != y)
		{
			printx('*', ' ', '*', x);
		}
	}
}

void	rush(int x, int y)
{
	int	j;

	j = 1;
	if (x > 0 && y > 0)
	{
		while (j <= y)
		{
			printy(y, x, j);
			ft_putchar('\n');
			j++;
		}
	}
}
