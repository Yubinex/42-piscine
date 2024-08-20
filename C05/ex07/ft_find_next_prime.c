/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:50:43 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/18 16:19:47 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	iter;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	iter = 5;
	while (iter * iter <= (unsigned int)nb)
	{
		if (nb % iter == 0 || nb % (iter + 2) == 0)
			return (0);
		iter += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	while (!ft_is_prime(++nb))
		;
	return (nb);
}

// #include <stdio.h>

// void	run_tests(void)
// {
// 	printf("Testing ft_is_prime:\n");
// 	printf("ft_is_prime(0) = %d (expected 0)\n", ft_is_prime(0));
// 	printf("ft_is_prime(1) = %d (expected 0)\n", ft_is_prime(1));
// 	printf("ft_is_prime(2) = %d (expected 1)\n", ft_is_prime(2));
// 	printf("ft_is_prime(3) = %d (expected 1)\n", ft_is_prime(3));
// 	printf("ft_is_prime(4) = %d (expected 0)\n", ft_is_prime(4));
// 	printf("ft_is_prime(5) = %d (expected 1)\n", ft_is_prime(5));
// 	printf("ft_is_prime(29) = %d (expected 1)\n", ft_is_prime(29));
// 	printf("ft_is_prime(30) = %d (expected 0)\n", ft_is_prime(30));
// 	printf("ft_is_prime(97) = %d (expected 1)\n", ft_is_prime(97));
// 	printf("ft_is_prime(100) = %d (expected 0)\n", ft_is_prime(100));
// 	printf("\nTesting ft_find_next_prime:\n");
// 	printf("ft_find_next_prime(0) = %d (expected 2)\n", ft_find_next_prime(0));
// 	printf("ft_find_next_prime(1) = %d (expected 2)\n", ft_find_next_prime(1));
// 	printf("ft_find_next_prime(2) = %d (expected 2)\n", ft_find_next_prime(2));
// 	printf("ft_find_next_prime(3) = %d (expected 3)\n", ft_find_next_prime(3));
// 	printf("ft_find_next_prime(4) = %d (expected 5)\n", ft_find_next_prime(4));
// 	printf("ft_find_next_prime(29) = %d (expected 29)\n",
// 		ft_find_next_prime(29));
// 	printf("ft_find_next_prime(30) = %d (expected 31)\n",
// 		ft_find_next_prime(30));
// 	printf("ft_find_next_prime(97) = %d (expected 97)\n",
// 		ft_find_next_prime(97));
// 	printf("ft_find_next_prime(100) = %d (expected 101)\n",
// 		ft_find_next_prime(100));
// 	printf("\nPerformance test cases:\n");
// 	printf("ft_find_next_prime(2147483646) = %d\n",
// 		ft_find_next_prime(2147483646));
// 	printf("ft_find_next_prime(2147483647) = %d\n",
// 		ft_find_next_prime(2147483647));
// }

// int	main(void)
// {
// 	run_tests();
// 	return (0);
// }
