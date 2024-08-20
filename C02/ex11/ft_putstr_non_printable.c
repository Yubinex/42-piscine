/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:56:49 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/06 18:06:42 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_non_printable(char c)
{
	if (c < 32 || c > 126)
		return (1);
	return (0);
}

void	print_hex(char c)
{
	char	*hex_digits;
	char	hex[3];

	hex_digits = "0123456789abcdef";
	hex[0] = '\\';
	hex[1] = hex_digits[(c / 16) % 16];
	hex[2] = hex_digits[(c % 16)];
	write(1, hex, 3);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_non_printable(str[i]))
		{
			print_hex(str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

// int	main(void)
// {
// 	char	test_str[] = "Hello\nWorld\x7F\x01\x02";

// 	ft_putstr_non_printable(test_str);
// 	return (0);
// }
