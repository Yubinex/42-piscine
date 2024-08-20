/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 14:09:13 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/12 15:43:23 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

void	reverse_string(char *str)
{
	int		left;
	int		right;
	char	tmp;

	right = get_str_len(str) - 1;
	left = 0;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

void	write_num(int nb)
{
	char	buffer[50];
	int		i;
	int		negative;

	i = 0;
	negative = 0;
	if (nb < 0)
	{
		negative = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (negative)
		buffer[i++] = '-';
	buffer[i] = 0;
	reverse_string(buffer);
	write(1, buffer, get_str_len(buffer));
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	write_num(nb);
}

// void print_expected(char *str) {
//     write(1, str, get_str_len(str));
//     write(1, "\n", 1);
// }

// int main(void)
// {
//     ft_putnbr(68 + 1);
//     write(1, "\n", 1);
//     print_expected("69");
//     ft_putnbr(-1234);
//     write(1, "\n", 1);
//     print_expected("-1234");
//     ft_putnbr(2147483647);
//     write(1, "\n", 1);
//     print_expected("2147483647");
//     ft_putnbr(-2147483648);
//     write(1, "\n", 1);
//     print_expected("-2147483648");
//     ft_putnbr(1);
//     write(1, "\n", 1);
//     print_expected("1");
//     ft_putnbr(-1);
//     write(1, "\n", 1);
//     print_expected("-1");
//     ft_putnbr(0);
//     write(1, "\n", 1);
//     print_expected("0");
//     ft_putnbr(123456);
//     write(1, "\n", 1);
//     print_expected("123456");
//     ft_putnbr(-123456);
//     write(1, "\n", 1);
//     print_expected("-123456");
//     ft_putnbr(111111);
//     write(1, "\n", 1);
//     print_expected("111111");
//     ft_putnbr(-111111);
//     write(1, "\n", 1);
//     print_expected("-111111");
//     ft_putnbr(-1000000000);
//     write(1, "\n", 1);
//     print_expected("-1000000000");
//     ft_putnbr(2147483646);
//     write(1, "\n", 1);
//     print_expected("2147483646");
//     ft_putnbr(-2147483647);
//     write(1, "\n", 1);
//     print_expected("-2147483647");

//     return (0);
// }
