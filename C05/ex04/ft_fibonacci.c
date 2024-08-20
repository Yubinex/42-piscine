/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:17:51 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/13 10:32:00 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("Fibonacci of 0: %i (Expected: 0)\n", ft_fibonacci(0));
// 	printf("Fibonacci of 1: %i (Expected: 1)\n", ft_fibonacci(1));
// 	printf("Fibonacci of 13: %i (Expected: 233)\n", ft_fibonacci(13));
// 	printf("Fibonacci of -1: %i (Expected: -1)\n", ft_fibonacci(-1));
// 	printf("Fibonacci of 20: %i (Expected: 6765)\n", ft_fibonacci(20));
// 	return (0);
// }
