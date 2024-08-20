/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:39:02 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/14 17:05:16 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
		i++;
	return (i);
}

int	concat_size(int size, char **strs, char *sep)
{
	int	malloc_size;
	int	i;

	i = 0;
	malloc_size = 0;
	while (i < size)
	{
		malloc_size += len(strs[i]);
		i++;
		if (i < size)
			malloc_size += len(sep);
	}
	return (malloc_size);
}

void	join(char *dest, int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*trivial_dest;

	trivial_dest = dest;
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			*trivial_dest = strs[i][j++];
			trivial_dest++;
		}
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				*trivial_dest = sep[j++];
				trivial_dest++;
			}
		}
	}
	*trivial_dest = 0;
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		if (str == NULL)
			return (NULL);
		str[0] = 0;
		return (str);
	}
	str = (char *)malloc(sizeof(char) * (concat_size(size, strs, sep) + 1));
	if (str == NULL)
		return (NULL);
	join(str, size, strs, sep);
	return (str);
}
