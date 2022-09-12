/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:28:10 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/29 14:39:05 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *scr)
{
	char	*cpy;
	int		c;

	c = 0;
	while (scr[c])
		c++;
	cpy = malloc(sizeof(char) * (c + 1));
	if (cpy == NULL)
		return (NULL);
	while (c >= 0)
	{
		cpy[c] = scr[c];
		c--;
	}
	return (cpy);
}
/*
int	main(void)
{
	char	*test;
	char	*dup;

	test = "Testando a função strdup!";
	printf("test = %s\n", test);
	dup = ft_strdup(test);
	printf("dup  = %s\n", dup);
	free(dup);
}
*/