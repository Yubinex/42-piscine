/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:36:21 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 11:29:48 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}

// int main() {
//     // Test cases
//     char str1[] = "hello";
//     char str2[] = "hello";
//     char str3[] = "hellp";
//     char str4[] = "he";
//     char str5[] = "hello world";
//     // Test 1: Identical strings
//     printf("Test 1: %d (Expected: 0)\n", ft_strncmp(str1, str2, 5));
//     // Test 2: Different strings
//     printf("Test 2: %d (Expected: < 0)\n", ft_strncmp(str1, str3, 5));
//     // Test 3: One string is a prefix of the other
//     printf("Test 3: %d (Expected: > 0)\n", ft_strncmp(str1, str4, 5));
//     // Test 4: Strings differ after n characters
//     printf("Test 4: %d (Expected: 0)\n", ft_strncmp(str1, str5, 5));
//     // Test 5: Compare with different lengths
//     printf("Test 5: %d (Expected: < 0)\n", ft_strncmp(str1, str5, 10));
//     return 0;
// }
