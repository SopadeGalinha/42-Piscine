/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:34:36 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 14:38:57 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tmp;

	i = 0;
	if (min >= max)
		return (0);
	tmp = malloc(sizeof(int) * (max - min));
	if (!tmp)
		return (-1);
	while (min < max)
	{
		tmp[i] = min++;
		i++;
	}
	*range = tmp;
	return (i);
}
/*
void	debug_dump_array(int numbers[], int size)
{
	int	index;

	printf("[ ");
	index = 0;
	while (index < size)
	{
		printf("%d", numbers[index]);
		if (index != size - 1)
		{
			printf(", ");
		}
		index++;
	}
	printf(" ]");
}

int	main(void)
{
	int	min;
	int	max;
	int	*range;
	int	bound;

	min = 5;
	max = 10;
	bound = ft_ultimate_range(&range, min, max);
	printf("min = %d, max = %d -> (bound = %d) ", min, max, bound);
	fflush(stdout);
	debug_dump_array(range, bound);
}

//gcc -fsanitize=address
*/