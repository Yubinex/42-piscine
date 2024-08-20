/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 09:47:47 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/14 21:13:02 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (power-- > 0)
		res *= nb;
	return (res);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("2^3 = %i\n", ft_iterative_power(2, 3));
// 	printf("Expected: 8\n\n");
// 	printf("3^4 = %i\n", ft_iterative_power(3, 4));
// 	printf("Expected: 81\n\n");
// 	printf("5^0 = %i\n", ft_iterative_power(5, 0));
// 	printf("Expected: 1\n\n");
// 	printf("0^5 = %i\n", ft_iterative_power(0, 5));
// 	printf("Expected: 0\n\n");
// 	printf("0^0 = %i\n", ft_iterative_power(0, 0));
// 	printf("Expected: 1\n\n");
// 	printf("2^1 = %i\n", ft_iterative_power(2, 1));
// 	printf("Expected: 2\n\n");
// 	printf("2^-3 = %i\n", ft_iterative_power(2, -3));
// 	printf("Expected: 0\n\n");
// 	printf("2^10 = %i\n", ft_iterative_power(2, 10));
// 	printf("Expected: 1024\n\n");
// 	printf("10^5 = %i\n", ft_iterative_power(10, 5));
// 	printf("Expected: 100000\n\n");
// 	printf("(-2)^3 = %i\n", ft_iterative_power(-2, 3));
// 	printf("Expected: -8\n\n");
// 	printf("(-2)^4 = %i\n", ft_iterative_power(-2, 4));
// 	printf("Expected: 16\n\n");
// 	return (0);
// }
