/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 09:33:48 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/25 10:28:16 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	aux;
	int	term1;
	int	term2;

	term1 = 0;
	term2 = 1;
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		aux = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (aux);
	}
	else
		return (-1);
}
