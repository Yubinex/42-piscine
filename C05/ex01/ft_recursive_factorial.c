/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:18:30 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/13 09:46:43 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("5!\t=\t%i\n", ft_recursive_factorial(5));
// 	printf("3!\t=\t%i\n", ft_recursive_factorial(3));
// 	printf("0!\t=\t%i\n", ft_recursive_factorial(0));
// 	return (0);
// }
