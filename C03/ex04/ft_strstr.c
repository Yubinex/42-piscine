/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhauck <jhauck@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 12:31:22 by jhauck            #+#    #+#             */
/*   Updated: 2024/08/07 11:56:46 by jhauck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}

// int main(void)
// {
//     char str1[] = "Hello, World!";
//     char to_find1[] = "World";
//     char str2[] = "Hello, World!";
//     char to_find2[] = "Galaxy";
//     char str3[] = "Hello, World!";
//     char to_find3[] = "";

//     // Test 1: Finding a substring that exists
//     char *result1 = ft_strstr(str1, to_find1);
//     if (result1)
//         printf("Test 1: %s (Expect: World!)\n", result1);
//     else
//         printf("Test 1: Not Found (Expect: World)\n");
//     // Test 2: Finding a substring that does not exist
//     char *result2 = ft_strstr(str2, to_find2);
//     if (result2)
//         printf("Test 2: %s (Expect: Not Found)\n", result2);
//     else
//         printf("Test 2: Not Found (Expect: Not Found)\n");
//     // Test 3: Searching for an empty substring
//     char *result3 = ft_strstr(str3, to_find3);
//     if (result3)
//         printf("Test 3: %s (Expect: Hello, World!)\n", result3);
//     else
//         printf("Test 3: Not Found (Expect: Hello, World!)\n");

//     return 0;
// }
