/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:03:02 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/14 21:27:22 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	len(char *buf)
{
	int	i;

	i = 0;
	while (buf[i])
		i++;
	return (i);
}

void	reverse(char *buf)
{
	int		left;
	int		right;
	char	tmp;

	left = 0;
	right = len(buf) - 1;
	while (left < right)
	{
		tmp = buf[left];
		buf[left] = buf[right];
		buf[right] = tmp;
		left++;
		right--;
	}
}

int	is_base(char ch, char *base)
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

int	get_val_from_base(char ch, char *base)
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
