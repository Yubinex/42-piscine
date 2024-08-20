/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 11:43:36 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 11:38:01 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*original_dest;

	if (dest == 0 || src == 0)
		return (0);
	original_dest = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
	return (original_dest);
}

// int main() {
//     // Test 1: Normal concatenation
//     char dest1[20] = "Hello";
//     const char *src1 = " World";
//     printf("Test 1: %s (Expected: Hello World)\n", ft_strcat(dest1, src1));
//     // Test 2: Concatenation with empty source
//     char dest2[20] = "Hello";
//     const char *src2 = "";
//     printf("Test 2: %s (Expected: Hello)\n", ft_strcat(dest2, src2));
//     // Test 3: Concatenation with empty destination
//     char dest3[20] = "";
//     const char *src3 = "Hello";
//     printf("Test 3: %s (Expected: Hello)\n", ft_strcat(dest3, src3));
//     // Test 4: Concatenation of two non-empty strings
//     char dest4[20] = "foo";
//     const char *src4 = "bar";
//     printf("Test 4: %s (Expected: foobar)\n", ft_strcat(dest4, src4));
//     // Test 5: Concatenation where destination
// 	//         buffer is exactly the size needed
//     char dest5[12] = "123456";
//     const char *src5 = "789";
//     printf("Test 5: %s (Expected: 123456789)\n", ft_strcat(dest5, src5));
//     return 0;
// }
