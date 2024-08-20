/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 21:47:26 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/19 22:47:44 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
int		is_separator(char ch, char *charset);
int		count_words(char *str, char *charset);
char	*ft_strdup(char *start, int len);
char	**ft_split(char *str, char *charset);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_separator(char ch, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	in_word;
	int	count;

	i = 0;
	in_word = 0;
	count = 0;
	while (str[i])
	{
		if (is_separator(str[i], charset))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		i++;
	}
	return (count);
}

char	*ft_strdup(char *start, int len)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = start[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		start;
	int		word_count;
	int		i;

	word_count = count_words(str, charset);
	strs = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (strs == NULL)
		return (NULL);
	word_count = 0;
	start = 0;
	i = -1;
	while (str[++i])
	{
		if (is_separator(str[i], charset))
		{
			if (i > start)
				strs[word_count++] = ft_strdup(&str[start], i - start);
			start = i + 1;
		}
	}
	if (i > start)
		strs[word_count++] = ft_strdup(&str[start], i - start);
	strs[word_count] = 0;
	return (strs);
}
