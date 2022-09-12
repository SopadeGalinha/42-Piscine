/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhgoncal <jhgoncal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:42:40 by jhgoncal          #+#    #+#             */
/*   Updated: 2021/09/30 08:56:16 by jhgoncal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	counter(char *str)
{
	int	c;

	c = 0;
	while (str[c++])
		c++;
	return (c);
}

void	ft_strcpy(int size, char **strs, char *sep, char *result)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[k++] = strs[i][j]++;
		j = 0;
		if ((i + 1) < size)
			while (sep[j])
				result[k++] = sep[j++];
		i++;
	}
	result[k + 1] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		len;
	char	*result;

	i = 0;
	len = 0;
	while (i < size)
		len += counter(strs[i++]);
	len += ((size - 1) * counter(sep));
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strcpy(size, strs, sep, result);
	return (result);
}
/*
int	main(void)
{
	int		index;
	char	**strs;
	char	*separator;
	char	*result;

	strs = (char **)malloc(4 * sizeof(strs));
	strs[0] = "we";
	strs[1] = "love";
	strs[2] = "the";
	strs[3] = "pulgamecanica";
	separator = " ~ ";
	size = 0;
	while (index < 5)
	{
		result = ft_strjoin(size, strs, separator);
		printf("result with size = %d : $%s$\n", size, result);
		free(result);
		index++;
	}
}
*/