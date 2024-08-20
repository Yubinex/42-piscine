/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:01:57 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 11:46:37 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*og_dest;

	if (dest == 0 || src == 0)
		return (0);
	og_dest = dest;
	i = 0;
	while (*dest)
		dest++;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = 0;
	return (og_dest);
}

// int main() {
//     // Test 1: Concatenate a few characters from the source
//     char dest1[20] = "Hello";
//     char *src1 = "World";
//     printf("Test 1: %s (Expected: HelloWor)\n", ft_strncat(dest1, src1, 3));
//     // Test 2: Concatenate with nb greater than the length of src
//     char dest2[20] = "Hello";
//     char *src2 = "World";
//     printf("Test 2: %s (Expect: HelloWorld)\n", ft_strncat(dest2, src2, 10));
//     // Test 3: Concatenate with nb equal to 0 (dest should not change)
//     char dest3[20] = "Hello";
//     char *src3 = "World";
//     printf("Test 3: %s (Expected: Hello)\n", ft_strncat(dest3, src3, 0));
//     return 0;
// }
