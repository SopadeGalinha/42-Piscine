/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 09:24:59 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 14:26:18 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*p;

	i = 0;
	if (min >= max)
		return (0);
	p = malloc(sizeof(int) * (max - min));
	if (!p)
		return (0);
	while (min < max)
	{
		p[i++] = min;
		min++;
	}
	return (p);
}
/*
int	main(void)
{
	int	*test;

	test = ft_range(1, 11);
	printf("\n* test0 (1, 11): ");
	print_test(test, 10);
}

void	print_test(int *test, int size)
{
	int	i;

	for (i = 0; i < size - 1; i++)
	{
		printf("%d - ", test[i]);
	}
	if (size > 0)
		printf("%d\n", test[size - 1]);
}
*/