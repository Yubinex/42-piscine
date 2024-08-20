/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:44:53 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/06 18:12:27 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphabetic(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	to_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0)
			str[i] = to_upper(str[i]);
		else if (is_alphabetic(str[i]))
		{
			if (str[i - 1] == ' ')
			{
				str[i] = to_upper(str[i]);
			}
			else if (str[i - 1] >= '*' && str[i - 1] <= '/')
				str[i] = to_upper(str[i]);
			else
			{
				str[i] = to_lower(str[i]);
			}
		}
		i++;
	}
	return (str);
}
