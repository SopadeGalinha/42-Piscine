/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:33:36 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/12 20:54:04 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	int	z;

	z = 0;
	if (n < z)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
