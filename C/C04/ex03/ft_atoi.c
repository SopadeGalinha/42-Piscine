/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 18:35:45 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 20:30:50 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_atoi(char *str)
{
	int c;
	int s;
	int r;

	c = 0;
	s = 1;
	r = 0;
	while ((str[c] >= '\t' && str[c] <= '\r') || str[c] == ' ')
		c++;
	while (str[c] == '+' || str[c] == '-')
	{
		if (str[c] == '-')
			s *= -1;
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		r = r *10 +str[c] - '0';
		c++;
	}
	return (r * s);
}
/*
int	main(int ac, char **av)
{
	if (ac > 0)
	printf("%d\n", ft_atoi(av[1]));

}
*/