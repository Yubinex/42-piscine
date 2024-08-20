/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:19:21 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/18 16:19:27 by jhauck           ###   ########.fr       */
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

// #include <stdio.h>

// void	run_tests(void)
// {
// 	printf("Testing ft_is_prime function:\n");
// 	printf("Test case 1: %d\n", ft_is_prime(0));
// 	printf("Test case 2: %d\n", ft_is_prime(1));
// 	printf("Test case 3: %d\n", ft_is_prime(2));
// 	printf("Test case 4: %d\n", ft_is_prime(3));
// 	printf("Test case 5: %d\n", ft_is_prime(4));
// 	printf("Test case 6: %d\n", ft_is_prime(29));
// 	printf("Test case 7: %d\n", ft_is_prime(30));
// 	printf("Test case 8: %d\n", ft_is_prime(97));
// 	printf("Performance test case 1: %d\n", ft_is_prime(2147483647));
// 	printf("Performance test case 2: %d\n", ft_is_prime(2147483646));
// }

// int	main(void)
// {
// 	run_tests();
// 	return (0);
// }
