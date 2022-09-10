/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 20:45:46 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/22 21:47:48 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		 return (0);
	else if (nb <= 1)
		return (1);
	else
		while (nb > 0)
			result *= nb--;
	return (result);
}
/* The operator *= means result = result * nb and nb--.
if nb its equals to 3;
result = 3 * 2 * 1 = 6;
result = 6;
*/
