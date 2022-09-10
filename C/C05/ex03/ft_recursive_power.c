/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 03:39:41 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/23 18:40:01 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
		return (nb * (ft_recursive_power(nb, (power - 1))));
	else if (power == 0)
		return (1);
	else
		return (0);
}
