/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:06:02 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/12 15:05:29 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	is_char_in_base(char *base, char ch)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ch)
			return (1);
		i++;
	}
	return (0);
}

int	get_value_from_base(char *base, char ch)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == ch)
			return (i);
		i++;
	}
	return (-1);
}

int	is_valid_base(char *base)
{
	int	i;
	int	j;

	if (len(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;

	if (!is_valid_base(base))
		return (0);
	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (is_char_in_base(base, *str))
	{
		res = res * len(base) + get_value_from_base(base, *str);
		str++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	char *str1 = "1011";
// 	char *base1 = "01";
// 	int result1 = ft_atoi_base(str1, base1);
// 	printf("Binary %s in decimal is: %d\n", str1, result1);
// 	printf("Expected: 11\n\n");
// 	char *str2 = "1A";
// 	char *base2 = "0123456789ABCDEF";
// 	int result2 = ft_atoi_base(str2, base2);
// 	printf("Hexadecimal %s in decimal is: %d\n", str2, result2);
// 	printf("Expected: 26\n\n");
// 	char *str3 = "-42";
// 	char *base3 = "0123456789";
// 	int result3 = ft_atoi_base(str3, base3);
// 	printf("Decimal %s in decimal is: %d\n", str3, result3);
// 	printf("Expected: -42\n");
// 	return (0);
// }
