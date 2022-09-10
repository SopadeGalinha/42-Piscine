/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 10:34:46 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/20 11:16:50 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1; 
	char *s2;

	s1 = "Me teste";
	s2 = "Me test2";
	printf("strcmp is: %i\n", strcmp(s1, s2));
    printf("ft_strcmp is: %i\n", ft_strcmp(s1, s2));
}
*/
