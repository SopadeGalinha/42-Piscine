/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+
 *                                                    */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 15:39:59 by galpers           #+#    #+#             */
/*   Updated: 2021/09/25 16:43:10 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_clear(t_dict	**begin)
{
	t_dict	*ptr;
	t_dict	*list;

	list = *begin;
	if (list)
	{
		while (list)
		{
			ptr = list->next;
			free(list->lit);
			free(list);
			list = ptr;
		}
	}
}

void	ft_list_swap(t_dict *list)
{
	int		nb;
	int		suf;
	char	*lit;

	nb = list->nb;
	suf = list->suf;
	lit = list->lit;
	list->nb = list->next->nb;
	list->suf = list->next->suf;
	list->lit = list->next->lit;
	list->next->nb = nb;
	list->next->suf = suf;
	list->next->lit = lit;
}

void	ft_list_sort(t_dict **beginlist)
{
	t_dict	*a;
	t_dict	*b;

	a = *beginlist;
	while (a != NULL)
	{
		b = *beginlist;
		while (b->next != NULL)
		{
			if (b->nb < b->next->nb)
				ft_list_swap(b);
			b = b->next;
		}
		a = a->next;
	}
}	

t_dict	*ft_create_new(int n, int suf, char *lit)
{
	t_dict	*new;

	new = NULL;
	new = malloc(sizeof (t_dict));
	if (new == NULL)
		return (new);
	if (new)
	{
		new->nb = n;
		new->suf = suf;
		new->lit = malloc(sizeof (char) * ft_strlen(lit) + 1);
		if (new->lit == NULL)
			return (new);
		new->lit = lit;
		new->next = NULL;
	}
	return (new);
}

int	ft_list_push(t_dict **list, int n, int suf, char *lit)
{

	t_dict	*push;

	if (list)
	{
		push = ft_create_new(n, suf, lit);
		if (push == NULL)
			return (0);
		push->next = *list;
		*list = push;
	}
	else if (ft_create_new(n, suf, lit) == NULL)
		return (0);
	return (1);
}
