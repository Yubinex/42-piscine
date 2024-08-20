/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:03:05 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/19 18:03:57 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *buf);
void	reverse(char *buf);
int		is_base(char ch, char *base);
int		get_val_from_base(char ch, char *base);

int	ft_atoi(char *buf, char *base)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*buf == 32 || (*buf >= 9 && *buf <= 13))
		buf++;
	while (*buf == '-' || *buf == '+')
	{
		if (*buf == '-')
			sign *= -1;
		buf++;
	}
	while (is_base(*buf, base))
	{
		res = res * len(base) + get_val_from_base(*buf, base);
		buf++;
	}
	return (res * sign);
}

void	handle_len_and_num(int *i, int *is_negative, char *base, int *num)
{
	int	num_cpy;

	*is_negative = 0;
	if (*num < 0)
	{
		*is_negative = 1;
		*num = -(*num);
	}
	*i = *is_negative;
	num_cpy = *num;
	while (num_cpy > 0)
	{
		num_cpy /= len(base);
		(*i)++;
	}
}

char	*ft_itoa(int num, char *base)
{
	char	*n_str;
	int		is_negative;
	int		i;

	handle_len_and_num(&i, &is_negative, base, &num);
	n_str = (char *)malloc(sizeof(char) * (i + 1));
	if (n_str == NULL)
		return (NULL);
	i = 0;
	while (num > 0)
	{
		n_str[i++] = base[num % len(base)];
		num /= len(base);
	}
	if (is_negative)
		n_str[i++] = '-';
	n_str[i] = 0;
	reverse(n_str);
	return (n_str);
}

int	is_base_valid(char *base)
{
	int	i;
	int	j;

	if (!base[0] || !base[1])
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] > 126)
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		i_nbr;
	char	*s_nbr;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
	{
		s_nbr = (char *)malloc(sizeof(char));
		s_nbr[0] = 0;
		return (NULL);
	}
	i_nbr = ft_atoi(nbr, base_from);
	s_nbr = ft_itoa(i_nbr, base_to);
	return (s_nbr);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	*result;

// 	result = ft_convert_base("123", "0123456789", "01");
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
