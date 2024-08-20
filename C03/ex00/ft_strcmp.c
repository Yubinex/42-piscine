/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:25:08 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 11:33:54 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

// int	main(void)
// {
// 	// Test 1: Identical strings
// 	char *str1 = "Hello World!";
// 	char *str2 = "Hello World!";
// 	printf("Test 1: %d (Expected 0)\n", ft_strcmp(str1, str2));

// 	// Test 2: Different strings (first difference at position 1)
// 	char *str3 = "H3llo World!";
// 	printf("Test 2: %d (Expected > 0)\n", ft_strcmp(str1, str3));

// 	// Test 3: Different strings (first difference at position 0)
// 	char *str4 = "hello World!";
// 	printf("Test 3: %d (Expected < 0)\n", ft_strcmp(str1, str4));

// 	// Test 4: One string is empty
// 	char *str5 = "";
// 	printf("Test 4: %d (Expected > 0)\n", ft_strcmp(str1, str5));

// 	// Test 5: Other string is empty
// 	printf("Test 5: %d (Expected < 0)\n", ft_strcmp(str5, str1));

// 	// Test 6: Both strings are empty
// 	printf("Test 6: %d (Expected 0)\n", ft_strcmp(str5, str5));

// 	// Test 7: Strings with special characters
// 	char *str6 = "Hello\nWorld!";
// 	char *str7 = "Hello\nworld!";
// 	printf("Test 7: %d (Expected < 0)\n", ft_strcmp(str6, str7));

// 	return 0;
// }
