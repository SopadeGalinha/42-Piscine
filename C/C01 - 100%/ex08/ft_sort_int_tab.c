/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:39:41 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/26 18:24:35 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	c;
	int	swap;

	c = 0;
	while (c < (size - 1))
	{
		if (tab[c] > tab[c + 1])
		{
			swap = tab[c];
			tab[c] = tab[c + 1];
			tab[c + 1] = swap;
			 c = 0;
		}
		else
			c++;
	}
}
