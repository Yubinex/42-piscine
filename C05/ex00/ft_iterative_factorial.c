/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 18:10:48 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/12 18:17:03 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("5!\t=\t%i\n", ft_iterative_factorial(5));
// 	printf("3!\t=\t%i\n", ft_iterative_factorial(3));
// 	printf("0!\t=\t%i\n", ft_iterative_factorial(0));
// 	return (0);
// }
