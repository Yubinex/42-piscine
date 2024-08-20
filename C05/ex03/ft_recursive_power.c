/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:08:32 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/14 21:15:27 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("2^3 = %i\n", ft_recursive_power(2, 3));
// 	printf("Expected: 8\n\n");
// 	printf("3^4 = %i\n", ft_recursive_power(3, 4));
// 	printf("Expected: 81\n\n");
// 	printf("5^0 = %i\n", ft_recursive_power(5, 0));
// 	printf("Expected: 1\n\n");
// 	printf("0^5 = %i\n", ft_recursive_power(0, 5));
// 	printf("Expected: 0\n\n");
// 	printf("0^0 = %i\n", ft_recursive_power(0, 0));
// 	printf("Expected: 1\n\n");
// 	printf("2^1 = %i\n", ft_recursive_power(2, 1));
// 	printf("Expected: 2\n\n");
// 	printf("2^-3 = %i\n", ft_recursive_power(2, -3));
// 	printf("Expected: 0\n\n");
// 	printf("2^10 = %i\n", ft_recursive_power(2, 10));
// 	printf("Expected: 1024\n\n");
// 	printf("10^5 = %i\n", ft_recursive_power(10, 5));
// 	printf("Expected: 100000\n\n");
// 	printf("(-2)^3 = %i\n", ft_recursive_power(-2, 3));
// 	printf("Expected: -8\n\n");
// 	printf("(-2)^4 = %i\n", ft_recursive_power(-2, 4));
// 	printf("Expected: 16\n\n");
// 	return (0);
// }
