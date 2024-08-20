/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 18:52:23 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/12 15:03:30 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	reverse_str(char *str)
{
	int		left;
	int		right;
	char	tmp;

	left = 0;
	right = get_str_len(str) - 1;
	while (left < right)
	{
		tmp = str[left];
		str[left] = str[right];
		str[right] = tmp;
		left++;
		right--;
	}
}

int	has_duplicate(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	handle_num(long *num, int *is_negative)
{
	if (*num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (*num < 0)
	{
		*num = -*num;
		*is_negative = 1;
	}
	else
		*is_negative = 0;
}

void	ft_putnbr_base(int nbr, char *base)
{
	char	buffer[50];
	int		i;
	int		len;
	int		is_negative;
	long	num;

	len = get_str_len(base);
	if (len < 2)
		return ;
	if (has_duplicate(base))
		return ;
	num = nbr;
	handle_num(&num, &is_negative);
	i = 0;
	while (num > 0)
	{
		buffer[i++] = base[num % len];
		num /= len;
	}
	if (is_negative)
		buffer[i++] = '-';
	buffer[i] = 0;
	reverse_str(buffer);
	write(1, buffer, get_str_len(buffer));
}

// int	main(void)
// {
// 	ft_putnbr_base(255, "0123456789ABCDEF");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-255, "0123456789");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(100, "poneyvif");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(5, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(100, "0123");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(-2147483648, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(3648, "01+");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(3648, "0");
// 	write(1, "\n", 1);
// 	return (0);
// }
