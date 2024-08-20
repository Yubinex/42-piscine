/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 15:20:57 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 17:28:17 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}

// int	main(void)
// {
// 	char str1[] = "12345";
// 	char str2[] = "   -6789";
// 	char str3[] = "42abc";
// 	char str4[] = "abc42";

// 	int num1 = atoi(str1);
// 	int num2 = atoi(str2);
// 	int num3 = atoi(str3);
// 	int num4 = atoi(str4);

// 	printf("STD ATOI:\n");
// 	printf("str1: %s\t-> num1: %d\n", str1, num1);
// 	printf("str2: %s\t-> num2: %d\n", str2, num2);
// 	printf("str3: %s\t-> num3: %d\n", str3, num3);
// 	printf("str4: %s\t-> num4: %d\n", str4, num4);

// 	int num11 = ft_atoi(str1);
// 	int num22 = ft_atoi(str2);
// 	int num33 = ft_atoi(str3);
// 	int num44 = ft_atoi(str4);
// 	printf("My ATOI:\n");
// 	printf("str1: %s\t-> num11: %d\n", str1, num11);
// 	printf("str2: %s\t-> num22: %d\n", str2, num22);
// 	printf("str3: %s\t-> num33: %d\n", str3, num33);
// 	printf("str4: %s\t-> num44: %d\n", str4, num44);
// 	return (0);
// }
