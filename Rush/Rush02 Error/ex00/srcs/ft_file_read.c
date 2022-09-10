/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galpers <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 14:36:32 by galpers           #+#    #+#             */
/*   Updated: 2021/09/26 19:54:09 by galpers          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

char	*addchar(char *str, char *buf)
{
	int		i;
	char	*add;

	i = 0;
	while (str[i])
		i++;
	add = malloc(sizeof (char) * (i + 2));
	if (add == NULL)
		return (add);
	i = -1;
	while (str[++i])
		add[i] = str[i];
	add[i] = buf[0];
	add[i + 1] = '\0';
	free(str);
	return (add);
}

int	valid_buf(int file, t_dict **begin)
{
	char	*str;
	char	buf[1];

	str = malloc(sizeof (char));
	str[0] = '\0';
	while (read(file, buf, 1) != 0)
	{
		if (buf[0] != '\n')
		{
			str = addchar(str, buf);
				if (str == NULL)
				return (0);
		}
		else
		{
			if (parse(begin, str) == 1)
			{
				free (str);	
				str = malloc(sizeof (char));
				str[0] = '\0';
			}
			else if (ft_strlen(str) != 0)
				return (0);
		}
	}	
	ft_list_sort(begin);
	return (1);
}				

int	ft_file_read(char *filepath, t_dict **begin)
{
	int	file;

	file = open(filepath, O_RDWR);
	if (file != -1)
	{	
		if (valid_buf(file, begin) == 0)
			return (-1);
		return (1);
	}
	else
		return (0);
}
