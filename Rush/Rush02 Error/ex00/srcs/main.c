/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 13:13:29 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 19:54:55 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	valid_argv(int argc, char **argv, char **nb, char **path)
{
	if (argc == 2)
	{	
		*path = "dicts/numbers.dict";
		*nb = argv[1];
		return (1);
	}
	else if (argc == 3)
	{
		*path = argv[1];
		*nb = argv[2];
	}
	return (0);
}

int	test_number(char *nb)
{
	int	i;

	i = -1;
	while (nb[++i])
		if (nb[i] < '0' || nb[i] > '9')
			return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	*nb;
	char	*path;

	if (valid_argv(argc, argv, &nb, &path) == 0 || test_number(nb) == 0)
		ft_putstr("Error\n");
	else
	{
		dict = 0;
	if (ft_file_read(path, &dict) == 1)
	{	
		numbercheck(nb, dict);
	}	
		else
			ft_putstr("Dict Error\n");
	}
	ft_clear(&dict);
	return (0);
}
