/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 14:57:46 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/08 10:20:21 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	get_str_len(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = get_str_len(dest);
	src_len = get_str_len(src);
	if (size <= dest_len)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = 0;
	return (dest_len + src_len);
}

// int	main(void)
// {
// 	char			dest1[50] = "Hello, ";
// 	char			src1[] = "world!";
// 	unsigned int	size1;
// 	unsigned int	result1;
// 	char			dest2[50] = "Hello, ";
// 	char			src2[] = "world!";
// 	unsigned int	size2;
// 	unsigned int	result2;
// 	char			dest3[50] = "Hello, ";
// 	char			src3[] = "world!";
// 	unsigned int	size3;
// 	unsigned int	result3;

// 	// Test 1: Normal concatenation
// 	size1 = 50;
// 	result1 = ft_strlcat(dest1, src1, size1);
// 	printf("Test 1: %s (Expected: Hello, world!), Length: %u (Expected: 13)\n",
// 		dest1, result1);
// 	// Test 2: Size smaller than source string length
// 	size2 = 3;
// 	result2 = ft_strlcat(dest2, src2, size2);
// 	printf("Test 2: %s (Expected: Hello, ), Length: %u (Expected: 13)\n", dest2,
// 		result2);
// 	// Test 3: Size smaller than combined length
// 	size3 = 2;
// 	result3 = ft_strlcat(dest3, src3, size3);
// 	printf("Test 3: %s (Expected: Hello, w), Length: %u (Expected: 13)\n",
// 		dest3, result3);
// 	return (0);
// }
