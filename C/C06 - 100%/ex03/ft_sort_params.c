/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 09:27:38 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 20:05:07 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	print_params(int ac, char **av)
{
	int	i;
	int	c;

	c = 0;
	while (c++ < ac)
	{
		i = 0;
		while (av[c][i])
			write(1, &av[c][i++], 1);
		write(1, "\n", 1);
	}
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s1[c] == s2[c] && (s1[c] != '\0' && s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

int	main(int ac, char **av)
{
	int		c;
	char	*temp;

	c = -1;
	if (ac)
	{
		while (c++ < (ac - 2))
			if (ft_strcmp(av[c], av[c + 1]) > 0)
			{
				temp = av[c];
				av[c] = av[c + 1];
				av[c + 1] = temp;
				c = 0;
			}
		print_params(ac, av);
	}
	return (0);
}