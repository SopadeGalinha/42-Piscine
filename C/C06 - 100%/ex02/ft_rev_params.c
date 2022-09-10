/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:11:36 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 16:27:29 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int ac, char **av)
{
	int	c;
	int	i;

	c = ac - 1;
	if (ac)
	{
		while (c > 0)
		{
			i = 0;
			while (av[c][i])
				write(1, &av[c][i++], 1);
			write(1, "\n", 1);
			c--;
		}
	}
	return (0);
}