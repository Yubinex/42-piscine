/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:33:14 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/18 17:06:29 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	lo;
	int	hi;
	int	m;

	if (nb < 1)
		return (0);
	lo = 1;
	hi = nb;
	while (lo <= hi)
	{
		m = lo + (hi - lo) / 2;
		if (m * m == nb)
			return (m);
		else if (m > nb / m)
			hi = m - 1;
		else
			lo = m + 1;
	}
	return (0);
}

// #include <stdio.h>

// int ft_sqrt(int nb);

// void test_sqrt(int input, int expected) {
//     int result = ft_sqrt(input);
//     printf("sqrt of %d is %d. Expected: %d. %s\n",
//            input, result, expected,
//            (result == expected) ? "Passed" : "Not passed");
// }

// int main() {
//     test_sqrt(0, 0);
//     test_sqrt(1, 1);
//     test_sqrt(2, 0);
//     test_sqrt(1640045925, 0);
//     test_sqrt(2147395600, 46340);
//     test_sqrt(2147483646, 0);
//     test_sqrt(183927844, 13562);
//     test_sqrt(1285266921, 0);
//     test_sqrt(1877575561, 43331);
//     test_sqrt(2009752514, 0);
//     test_sqrt(1567130569, 39587);
//     test_sqrt(1079200507, 0);
//     test_sqrt(114383025, 10695);
//     test_sqrt(1081754580, 0);
//     test_sqrt(1344175569, 36663);
//     test_sqrt(179035390, 0);

//     return 0;
// }
